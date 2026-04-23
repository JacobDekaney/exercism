#include <string>

namespace log_line {
std::string message(std::string line) {
    if (line.find("[INFO]: ") == 0) {
        return line.substr(8);
    }
    else if (line.find("[WARNING]: ") == 0) {
        return line.substr(11);
    }
    else if (line.find("[ERROR]: ") == 0) {
        return line.substr(9);
    }
    else {
        return line;
    }
}

std::string log_level(std::string line) {
    if (line.find("[INFO]") == 0) {
        return "INFO";
    }
    else if (line.find("[WARNING]") == 0) {
        return "WARNING";
    }
    else if (line.find("[ERROR]") == 0) {
        return "ERROR";
    }
    else {
        return line;
    }
}

std::string reformat(std::string line) {
    if (line.find("[INFO]: ") == 0) {
        return line.substr(8) + " (INFO)";
    }
    else if (line.find("[WARNING]: ") == 0) {
        return line.substr(11) + " (WARNING)";
    }
    else if (line.find("[ERROR]: ") == 0) {
        return line.substr(9) + " (ERROR)";
    }
    else {
        return line;
    }
}
}  // namespace log_line
