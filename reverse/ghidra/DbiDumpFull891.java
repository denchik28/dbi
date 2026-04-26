// Dump decompile for EVERY function in the DBI 887 Ghidra program, with NO truncation.
// Mirror of DbiDumpFull.java but writes full_decomp_891_{0..N}.c so it does not
// overwrite the 791 artifacts.
// Output: /opt/aimeld-proj/re/analysis/full_decomp_891_0.c, full_decomp_891_1.c, ...

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.util.*;

public class DbiDumpFull891 extends GhidraScript {
    @Override
    public void run() throws Exception {
        Program p = currentProgram;
        String outDir = "/opt/aimeld-proj/re/analysis";
        String outPrefix = "full_decomp_891_";

        List<Function> all = new ArrayList<>();
        FunctionIterator fit = p.getFunctionManager().getFunctions(true);
        while (fit.hasNext()) all.add(fit.next());
        println("Total functions: " + all.size());

        DecompInterface decomp = new DecompInterface();
        DecompileOptions dopts = new DecompileOptions();
        dopts.grabFromProgram(p);
        try { dopts.setMaxInstructions(100000); } catch (Throwable t) {}
        try { dopts.setMaxPayloadMBytes(256); } catch (Throwable t) {}
        decomp.setOptions(dopts);
        decomp.setSimplificationStyle("decompile");
        decomp.openProgram(p);

        int chunkIdx = 0;
        int perChunk = 400;
        int doneInChunk = 0;
        BufferedWriter w = new BufferedWriter(new FileWriter(outDir + "/" + outPrefix + "0.c"));
        int total = 0;
        int failed = 0;
        long startMs = System.currentTimeMillis();
        for (Function f : all) {
            long bodySize = f.getBody().getNumAddresses();
            int timeoutSec = (int) Math.min(600, Math.max(60, bodySize / 20));
            w.write("// ===== " + f.getName() + " @ " + f.getEntryPoint()
                    + " (size=" + bodySize + ") =====\n");
            try {
                DecompileResults r = decomp.decompileFunction(f, timeoutSec, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    String c = r.getDecompiledFunction().getC();
                    w.write(c + "\n\n");
                } else {
                    String err = (r != null) ? r.getErrorMessage() : "null-result";
                    w.write("// DECOMPILE FAILED: " + err + "\n\n");
                    failed++;
                }
            } catch (Throwable t) {
                w.write("// DECOMPILE EXCEPTION: " + t.getMessage() + "\n\n");
                failed++;
            }
            total++;
            doneInChunk++;
            if (doneInChunk >= perChunk) {
                w.close();
                chunkIdx++;
                doneInChunk = 0;
                w = new BufferedWriter(new FileWriter(outDir + "/" + outPrefix + chunkIdx + ".c"));
            }
            if (total % 50 == 0) {
                long elapsedS = (System.currentTimeMillis() - startMs) / 1000;
                println("  progress: " + total + "/" + all.size()
                        + " (" + failed + " failed, " + elapsedS + "s elapsed)");
            }
            if (monitor.isCancelled()) break;
        }
        w.close();
        decomp.dispose();
        long elapsedS = (System.currentTimeMillis() - startMs) / 1000;
        println("FINISHED: " + total + " funcs, " + failed + " failed, "
                + (chunkIdx + 1) + " chunks, " + elapsedS + "s total");
    }
}
