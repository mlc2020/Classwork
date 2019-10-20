#include <iostream>
#include <vector>
using namespace std;
#include "functions.h"

int main() {

    int a{}, b{};
    bool valid{true};
    int validcounter{};
    int permcounter{};

    cout << "Enter numbers a <= b: ";
    cin >> a >> b;

    if (a > 0 && a <= 10000 && b > 0 && b <= 10000 && a <= b) {
        for (int i{a}; i <= b; i++) {
            for (int j{}; j <= 9; j++) {
                permcounter = countDigitOccurrences(i, j);
                if (permcounter <= 1 && valid) {
                    valid = true;
                } else {
                    valid = false;
                }
            }
            if (valid) {
                validcounter++;
            }
            valid = true;
        }
        cout << "There are " << validcounter << " valid numbers between " << a << " and " << b << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}