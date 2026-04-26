// Ghidra headless post-script for DBI 887: dumps functions/strings/symbols to
// *_891.tsv so the 791 analysis files stay intact.
// Usage: analyzeHeadless <proj-dir> <proj-name> -import <nro> -postScript DbiAnalyze891.java -scriptPath /opt/aimeld-proj/re/scripts

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.util.*;

public class DbiAnalyze891 extends GhidraScript {
    @Override
    public void run() throws Exception {
        Program p = currentProgram;
        String outDir = "/opt/aimeld-proj/re/analysis";
        new java.io.File(outDir).mkdirs();

        println("=== DBI 887 Analysis ===");
        println("Program: " + p.getName());
        println("Image base: " + p.getImageBase());
        println("Min addr:   " + p.getMinAddress());
        println("Max addr:   " + p.getMaxAddress());

        // 1. Function dump
        FunctionIterator funcs = p.getFunctionManager().getFunctions(true);
        int fcount = 0, named = 0;
        try (BufferedWriter w = new BufferedWriter(new FileWriter(outDir + "/functions_891.tsv"))) {
            w.write("addr\tsize\tname\tsig\n");
            while (funcs.hasNext()) {
                Function f = funcs.next();
                fcount++;
                String name = f.getName();
                if (!name.startsWith("FUN_") && !name.startsWith("thunk_FUN_")) named++;
                long size = f.getBody().getNumAddresses();
                String sig = f.getSignature().toString().replace("\t", " ");
                w.write(f.getEntryPoint() + "\t" + size + "\t" + name + "\t" + sig + "\n");
            }
        }
        println("Functions: " + fcount + " (named: " + named + ")");

        // 2. Symbol dump
        SymbolIterator syms = p.getSymbolTable().getAllSymbols(true);
        int scount = 0;
        Map<String, Integer> sourceCount = new HashMap<>();
        try (BufferedWriter w = new BufferedWriter(new FileWriter(outDir + "/symbols_891.tsv"))) {
            w.write("addr\tname\tnamespace\tsource\ttype\n");
            while (syms.hasNext()) {
                Symbol s = syms.next();
                scount++;
                String src = s.getSource().name();
                sourceCount.merge(src, 1, Integer::sum);
                w.write(s.getAddress() + "\t" + s.getName() + "\t"
                        + s.getParentNamespace().getName() + "\t"
                        + src + "\t" + s.getSymbolType() + "\n");
            }
        }
        println("Symbols: " + scount);
        println("  By source: " + sourceCount);

        // 3. Strings (>=4 chars) with xref count
        int strCount = 0;
        var listing = p.getListing();
        try (BufferedWriter w = new BufferedWriter(new FileWriter(outDir + "/strings_891.tsv"))) {
            w.write("addr\txrefs\tlen\tvalue\n");
            var dataIter = listing.getDefinedData(true);
            while (dataIter.hasNext()) {
                var d = dataIter.next();
                if (d.getDataType().getName().toLowerCase().contains("string")
                    || d.getDataType().getName().contains("char")) {
                    String v = String.valueOf(d.getValue());
                    if (v.length() < 4) continue;
                    int xr = p.getReferenceManager().getReferenceCountTo(d.getAddress());
                    w.write(d.getAddress() + "\t" + xr + "\t" + v.length() + "\t"
                            + v.replace("\t", " ").replace("\n", "\\n") + "\n");
                    strCount++;
                }
            }
        }
        println("Strings: " + strCount);

        // 4. svcSendSyncRequest xrefs (best-effort; NRO usually lacks imports)
        Symbol svcSend = null;
        for (Symbol s : p.getSymbolTable().getSymbols("svcSendSyncRequest")) {
            svcSend = s;
            break;
        }
        if (svcSend != null) {
            var refIter = p.getReferenceManager().getReferencesTo(svcSend.getAddress());
            int refCount = 0;
            try (BufferedWriter w = new BufferedWriter(new FileWriter(outDir + "/ipc_sites_891.tsv"))) {
                w.write("call_addr\tfunc_addr\tfunc_name\n");
                while (refIter.hasNext()) {
                    Reference r = refIter.next();
                    refCount++;
                    Address callAddr = r.getFromAddress();
                    Function f = p.getFunctionManager().getFunctionContaining(callAddr);
                    w.write(callAddr + "\t"
                            + (f != null ? f.getEntryPoint() : "?") + "\t"
                            + (f != null ? f.getName() : "?") + "\n");
                }
            }
            println("svcSendSyncRequest xrefs: " + refCount);
        } else {
            println("svcSendSyncRequest symbol NOT found (expected for NRO without imports table)");
        }

        println("=== DBI 887 Analysis done. Output in " + outDir + " (*_891.tsv) ===");
    }
}
