#include "difference_of_squares.h"

namespace difference_of_squares {

    int square_of_sum(int n) {
        int tot = 0;

        for (int i = 1; i <= n; i++) {
            tot += i;
        }
        
        return tot * tot;
    }

    int sum_of_squares(int n) {
        int tot = 0;

        for (int i = 1; i <= n; i++) {
            tot += i * i;
        }

        return tot;
    }

    int difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }

}  // namespace difference_of_squares
