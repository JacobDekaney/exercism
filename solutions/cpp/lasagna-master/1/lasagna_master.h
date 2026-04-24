#pragma once
#include <string>
#include <vector>

namespace lasagna_master {

    struct amount {
        int noodles;
        double sauce;
    };

    int preparationTime(std::vector<std::string> layers, int avg);

    int preparationTime(std::vector<std::string> layers);

    amount quantities(std::vector<std::string> ingrediants);

    void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string> friendsList);

    std::vector<double> scaleRecipe(std::vector<double> quantities, int portions);

    std::vector<double> quantities(std::vector<double> quantities, int portions);
    
    void addSecretIngredient(std::vector<std::string>& myList, std::string secretIngrediant);
}  // namespace lasagna_master
