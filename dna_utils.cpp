#include "dna_utils.h"

std::string transcribeToRNA(const std::string& dna) {
    std::string rna = "";
    for (char base : dna) {
        switch (base) {
            case 'A': rna += 'A'; break;
            case 'T': rna += 'U'; break;
            case 'C': rna += 'C'; break;
            case 'G': rna += 'G'; break;
            default: rna += 'N'; break;
        }
    }
    return rna;
}

std::string replicateDNA(const std::string& dna) {
    std::string complement;
    for (char base : dna) {
        switch (base) {
            case 'A': complement += 'T'; break;
            case 'T': complement += 'A'; break;
            case 'C': complement += 'G'; break;
            case 'G': complement += 'C'; break;
            default: complement += 'N'; break;
        }
    }
    return complement;
}
