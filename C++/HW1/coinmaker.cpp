#include <iostream>
#include <vector>
using namespace std;

void coinmaker_print(int xdollars, int ycents) {
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};
    vector<int> coins{quarters, dimes, nickels, pennies};
    vector<int> coinval{25, 10, 5, 1};
    ycents += (xdollars * 100);
    for (size_t i{}; i < coinval.size(); i++) { //this for loop iterates through the coins and coinval vectors and assigns each coin with how many is used by the user inputs.
        coins.at(i) = ycents / coinval.at(i); //ex. quarters = total cents / 25
        ycents = ycents % coinval.at(i); // sets cents to the remainder after dividing

    }
    cout << "Pennies: " << coins.at(3) << endl;
    cout << "Nickels: " << coins.at(2) << endl;
    cout << "Dimes: " << coins.at(1) << endl;
    cout << "Quarters: " << coins.at(0) << endl;
    cout << endl;
    cout << "Total coins used: " << coins.at(0) + coins.at(1) + coins.at(2) + coins.at(3) << endl;

}

int main() {
    int dollars{};
    int cents{};
    cout << "Enter dollars: ";
    cin >> dollars;
    cout << "Enter cents: ";
    cin >> cents;

    coinmaker_print(dollars, cents);


    return 0;
}