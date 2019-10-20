#include <iostream>
#include <vector>
#include "functions.h"

int countDigitOccurrences (int n, int digit) {
    int counter{};
    std::vector<int> vec{};
    if (1000 <= n && n <= 9999) {
        for(int k{}; k < 4 ; k++) {
            vec.push_back(n%10);
            n /= 10;
        }
    } else if (100 <= n && n <= 999) {
        for(int k{}; k < 3; k++) {
            vec.push_back(n%10);
            n /= 10;
        }
    } else if (10 <= n && n <= 99) {
        for(int k{}; k < 2; k++) {
            vec.push_back(n % 10);
            n /= 10;
        }
    } else if (0 < n && n < 10) {
        for(int k{}; k < 1; k++) {
            vec.push_back(n % 10);
            n /= 10;
        }
    } else {
        for(int k{}; k < 5; k++) {
            vec.push_back(n%10);
            n /= 10;
        }
    }
    for (auto num: vec) {
        if (digit == num) {
            counter++;
        }
    }

    return counter;
}

