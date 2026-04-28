#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string forward) {
        std::string rev{};
        int size = static_cast<int>(forward.length());

        for(int i = 0; i < size; i++) {
            rev += forward[size - 1 - i];
        }
        
        return rev;
    }

}  // namespace reverse_string
