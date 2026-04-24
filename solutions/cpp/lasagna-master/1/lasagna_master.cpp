#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(std::vector<std::string> layers, int avg) {
        return layers.size() * avg;
    }

    int preparationTime(std::vector<std::string> layers) {
        return layers.size() * 2;
    }

    amount quantities(std::vector<std::string> ingrediants) {
        amount weights{0, 0};
        for (std::string i : ingrediants) {
            if (i == "noodles") {
                weights.noodles += 50;
            }
            else if (i == "sauce") {
                weights.sauce += 0.2;
            }
        }
        return weights;
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string> friendsList) {
        myList[myList.size() - 1] = friendsList.back(); 
    }

    std::vector<double> scaleRecipe(std::vector<double> quantities, int portions) {
        std::vector<double> new_quantities{};
        for (double q : quantities) {
            new_quantities.push_back(q * (static_cast<double>(portions) / 2));
        }
        return new_quantities;
    }

    void addSecretIngredient(std::vector<std::string>& myList, std::string secretIngrediant) {
        myList[myList.size() - 1] = secretIngrediant; 
    }

}  // namespace lasagna_master
