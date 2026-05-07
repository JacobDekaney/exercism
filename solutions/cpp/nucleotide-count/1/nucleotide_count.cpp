#include "nucleotide_count.h"

namespace nucleotide_count {

    std::map<char, int> count (std::string dna) {
        std::map<char, int> tot = {
            {'A', 0},
            {'C', 0},
            {'G', 0},
            {'T', 0}
        };

        for (char c : dna) {
            if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
                tot[c]++;
            }
            else {
                throw std::invalid_argument("");
            }
        }
        
        return tot;
    }

}  // namespace nucleotide_count
