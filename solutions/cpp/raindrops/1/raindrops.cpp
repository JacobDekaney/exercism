#include "raindrops.h"


namespace raindrops {

    std::string convert(int num) {
        std::string drops{};

        if (num % 3 == 0) {
            drops += "Pling";
        }
        if (num % 5 == 0) {
            drops += "Plang";
        }
        if (num % 7 == 0) {
            drops += "Plong";
        }
        if (drops == "") {
            drops = std::to_string(num);
        }
        
        return drops;
    }

}  // namespace raindrops
