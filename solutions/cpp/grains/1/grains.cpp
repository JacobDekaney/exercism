#include "grains.h"
#include <cmath>

namespace grains {

    unsigned long long square (int grid) {
        return pow(2, grid - 1);
    }

    unsigned long long total () {
        int total = 0;

        for (int i = 1; i < 65; i++) {
            total += square(i);
        }
        
        return total;
    }
    

}  // namespace grains
