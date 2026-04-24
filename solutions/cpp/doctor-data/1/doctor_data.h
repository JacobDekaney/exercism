#include <string>

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
        public:
            std::string name;
            int generation = 0;
            star_map::System current_system;
            int busters = 0;

            Vessel (std::string new_name, int num, star_map::System sys) {
                name = new_name;
                generation = num;
                current_system = sys;
            }
    
            Vessel (std::string new_name, int num) {
                name = new_name;
                generation = num;
                current_system = star_map::System::Sol;
            }

            heaven::Vessel replicate(std::string new_name) {
                heaven::Vessel replication{new_name, generation + 1, current_system};
                return replication;
            }

            void make_buster(){
                busters++;
            }
    
            bool shoot_buster(){
                if (busters != 0){
                    busters--;
                    return true;
                } 
                else {
                    return false;
                }
            }
        private: 
    };

    std::string get_older_bob(heaven::Vessel sys1, heaven::Vessel sys2);
    bool in_the_same_system(heaven::Vessel sys1, heaven::Vessel sys2);
}
