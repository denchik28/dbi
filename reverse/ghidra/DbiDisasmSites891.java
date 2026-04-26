// Disassemble +/-8 instructions around given VAs.
// Output: /opt/aimeld-proj/re/analysis/disasm_891_sites.txt

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Program;

import java.io.BufferedWriter;
import java.io.FileWriter;

public class DbiDisasmSites891 extends GhidraScript {
    static final long[] SITES = {
        0x71002c869cL,  // ReadMT xref 1
        0x710046f924L,  // ReadMT xref 2
        0x7100089b1cL,  // ActivityLog xref
        0x7100089b38L,  // HideUnknownUsers xref
        0x710019605cL,  // PatchMasterKeyGeneration xref
        0x7100196104L,  // Patch21Names xref
    };

    @Override
    public void run() throws Exception {
        Program p = currentProgram;
        Listing listing = p.getListing();
        try (BufferedWriter w = new BufferedWriter(new FileWriter("/opt/aimeld-proj/re/analysis/disasm_891_sites.txt"))) {
            for (long va : SITES) {
                Address a = p.getAddressFactory().getDefaultAddressSpace().getAddress(va);
                w.write(String.format("\n===== site 0x%x =====\n", va));
                // walk back ~32 bytes
                Address start = a.subtract(0x20);
                Instruction ins = listing.getInstructionAt(start);
                if (ins == null) ins = listing.getInstructionAfter(start);
                int n = 0;
                while (ins != null && n < 16) {
                    boolean atSite = ins.getAddress().getOffset() == va;
                    String mark = atSite ? "  ***" : "";
                    w.write(String.format("  %s: %-30s%s\n", ins.getAddress(), ins.toString(), mark));
                    ins = ins.getNext();
                    n++;
                }
            }
        }
        println("wrote /opt/aimeld-proj/re/analysis/disasm_891_sites.txt");
    }
}
