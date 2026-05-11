#include "rna_transcription.h"

namespace rna_transcription {

    char to_rna(char dna) {
        
        if (dna == 'G') {
            return 'C';
        }
        else if (dna == 'C') {
            return 'G';
        }
        else if (dna == 'T') {
            return 'A';
        }
        else {
            return 'U';
        }
    }

    std::string to_rna(std::string dna) {
        std::string rna;
        for (char c : dna) {
            if (c == 'G') {
                rna += 'C';
            }
            else if (c == 'C') {
                rna += 'G';
            }
            else if (c == 'T') {
                rna += 'A';
            }
            else if (c == 'A') {
                rna += 'U';
            }
        }
        return rna;
    }

}  // namespace rna_transcription
