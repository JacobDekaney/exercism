#include "collatz_conjecture.h"

namespace collatz_conjecture {

    int steps(int base) {
        int count = 0;
        if (base < 1) {
            throw std::domain_error("Invalid input: must be greater or equal to 1");
        }

        while (base > 1) {
            if (base % 2 == 0) {
                base /= 2;
                count++;
            }
            else {
                base = (3 * base) + 1;
                count++;
            }
        }
        
        return count;
    }

}  // namespace collatz_conjecture
