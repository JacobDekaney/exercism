#include "pangram.h"

namespace pangram {

    bool is_pangram(std::string str) {
        std::vector<bool> alpha(26, false);
        int index = 0;

        for (int i = 0; i < static_cast<int>(str.length()); i++) {
            
            if ('A' <= str[i] && str[i] <= 'Z') {
                index = str[i] - 'A';
            }
                
            else if ('a' <= str[i] && str[i] <= 'z') {
                index = str[i] - 'a';
            }
    
            alpha[index] = true;
        }

        for (int i = 0; i <= 25; i++) {
            if (alpha[i] == false) {
                return (false);
            }
        }
        
        return (true);
    }

}  // namespace pangram
