#ifndef CODON_DATA_H
#define CODON_DATA_H

#include <string>
#include <vector>

struct Codon {
    std::string sequence;
    std::string name;
    std::string abbreviation;
    char symbol;
};

extern const std::vector<Codon> codonTable;

#endif
