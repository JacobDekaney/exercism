#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> truncated_scores{};

    for (double score : student_scores) {
        truncated_scores.push_back(static_cast<int> (score));
    }
    
    return truncated_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int fails = 0;
    for (int i : student_scores) {
        fails += (i <= 40) ? 1 : 0; 
    }
    return fails;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int failing = 40;
    int range = (highest_score - failing) / 4;
    std::array<int, 4> grades;
    
    for (int i = 0; i < 4; i++) {
        grades[i] = failing + 1 + (range * i);
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> ranks {};
    std::string tmp;
    
    for (int i = 0; i < student_scores.size(); i++) {
        tmp = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]); 
        ranks.push_back(tmp);
    }
    
    return ranks;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}
