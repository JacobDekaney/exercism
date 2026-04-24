#include "doctor_data.h"
#include <string>

std::string heaven::get_older_bob (heaven::Vessel sys1, heaven::Vessel sys2) {
    if (sys1.generation < sys2.generation) {
        return sys1.name;
    }
    else {
        return sys2.name;
    }
}

bool heaven::in_the_same_system (heaven::Vessel sys1, heaven::Vessel sys2) {
    if (sys1.current_system == sys2.current_system) {
        return true;
    }
    else {
        return false;
    }
}