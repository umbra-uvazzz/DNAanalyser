#include "codon_data.h"

const std::vector<Codon> codonTable = {
    {"UUU", "Phenylalanine", "Phe", 'F'}, {"UUC", "Phenylalanine", "Phe", 'F'},
    {"UUA", "Leucine", "Leu", 'L'}, {"UUG", "Leucine", "Leu", 'L'},
    {"CUU", "Leucine", "Leu", 'L'}, {"CUC", "Leucine", "Leu", 'L'},
    {"CUA", "Leucine", "Leu", 'L'}, {"CUG", "Leucine", "Leu", 'L'},
    {"AUU", "Isoleucine", "Ile", 'I'}, {"AUC", "Isoleucine", "Ile", 'I'},
    {"AUA", "Isoleucine", "Ile", 'I'}, {"AUG", "Methionine", "Met", 'M'},
    {"GUU", "Valine", "Val", 'V'}, {"GUC", "Valine", "Val", 'V'},
    {"GUA", "Valine", "Val", 'V'}, {"GUG", "Valine", "Val", 'V'},

    {"UCU", "Serine", "Ser", 'S'}, {"UCC", "Serine", "Ser", 'S'},
    {"UCA", "Serine", "Ser", 'S'}, {"UCG", "Serine", "Ser", 'S'},
    {"AGU", "Serine", "Ser", 'S'}, {"AGC", "Serine", "Ser", 'S'},
    {"CCU", "Proline", "Pro", 'P'}, {"CCC", "Proline", "Pro", 'P'},
    {"CCA", "Proline", "Pro", 'P'}, {"CCG", "Proline", "Pro", 'P'},
    {"ACU", "Threonine", "Thr", 'T'}, {"ACC", "Threonine", "Thr", 'T'},
    {"ACA", "Threonine", "Thr", 'T'}, {"ACG", "Threonine", "Thr", 'T'},
    {"GCU", "Alanine", "Ala", 'A'}, {"GCC", "Alanine", "Ala", 'A'},
    {"GCA", "Alanine", "Ala", 'A'}, {"GCG", "Alanine", "Ala", 'A'},

    {"UAU", "Tyrosine", "Tyr", 'Y'}, {"UAC", "Tyrosine", "Tyr", 'Y'},
    {"UAA", "STOP", "Stop", '*'}, {"UAG", "STOP", "Stop", '*'},
    {"UGA", "STOP", "Stop", '*'}, {"CAU", "Histidine", "His", 'H'},
    {"CAC", "Histidine", "His", 'H'}, {"CAA", "Glutamine", "Gln", 'Q'},
    {"CAG", "Glutamine", "Gln", 'Q'}, {"AAU", "Asparagine", "Asn", 'N'},
    {"AAC", "Asparagine", "Asn", 'N'}, {"AAA", "Lysine", "Lys", 'K'},
    {"AAG", "Lysine", "Lys", 'K'}, {"GAU", "Aspartic acid", "Asp", 'D'},
    {"GAC", "Aspartic acid", "Asp", 'D'}, {"GAA", "Glutamic acid", "Glu", 'E'},
    {"GAG", "Glutamic acid", "Glu", 'E'},

    {"UGU", "Cysteine", "Cys", 'C'}, {"UGC", "Cysteine", "Cys", 'C'},
    {"UGG", "Tryptophan", "Trp", 'W'}, {"CGU", "Arginine", "Arg", 'R'},
    {"CGC", "Arginine", "Arg", 'R'}, {"CGA", "Arginine", "Arg", 'R'},
    {"CGG", "Arginine", "Arg", 'R'}, {"AGA", "Arginine", "Arg", 'R'},
    {"AGG", "Arginine", "Arg", 'R'}, {"GGU", "Glycine", "Gly", 'G'},
    {"GGC", "Glycine", "Gly", 'G'}, {"GGA", "Glycine", "Gly", 'G'},
    {"GGG", "Glycine", "Gly", 'G'}
};
