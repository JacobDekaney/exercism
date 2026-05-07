#include "hamming.h"

namespace hamming {

    int compute (std::string dna1, std::string dna2) {
        int diff = 0;

        if (dna1.length() != dna2.length()) {
            throw std::domain_error("Error");
        }

        for (int c = 0; c < static_cast<int>(dna1.length()); c++) {
            if (dna1[c] != dna2[c]) {
                diff++;
            }
        }

        
        return diff;
    } 

}  // namespace hamming
