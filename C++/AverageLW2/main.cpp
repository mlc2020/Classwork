#include <iostream>
using namespace std;

int main() {
    float average{};
    float input{};
    float counter{};
    cin >> input;

    if (input == 0) {
        cout << "empty";
    } else {
        while (input != 0) {
            average += input;
            counter++;
            cin >> input;
        }

        average /= counter;
        cout << "avg: " << average;
    }




    return 0;
}