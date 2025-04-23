#include <iostream>
#include <string>
#include "codon_data.h"
#include "dna_utils.h"

int main() {
    std::string target;
    std::cout << "Enter a DNA sequence:";
    std::cin >> target;

    // Transcription & replication
    std::string transcribedRNA = transcribeToRNA(target);
    std::string replicatedDNA = replicateDNA(target);

    std::cout << "\n--- DNA Transcription & Replication ---\n";
    std::cout << "Original DNA     : " << target << "\n";
    std::cout << "Transcribed RNA  : " << transcribedRNA << "\n";
    std::cout << "Replicated DNA   : " << replicatedDNA << "\n";

    // Translation
    std::cout << "\n--- Codon Match Results ---\n";
    for (size_t i = 0; i + 2 < transcribedRNA.length(); i += 3) {
        std::string codon = transcribedRNA.substr(i, 3);
        for (const Codon& entry : codonTable) {
            if (entry.sequence == codon) {
                std::cout << codon << " -> " << entry.name
                          << " (" << entry.abbreviation << ", " << entry.symbol << ")\n";
                break;
            }
        }
    }

    return 0;
}
