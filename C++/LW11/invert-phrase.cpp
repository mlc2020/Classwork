#include <iostream>
#include <string>
#include "Stack.h"
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    Stack<string> s;
    int length = 0;
    string line;
    std::getline(cin, line);
    string input;
    std::istringstream iss(line);
    while (iss.good()) {
        iss >> input;
        if (input.back() == '.') {
            input.pop_back();
        }
        s.push(input);
        ++length;
    }

    for (int i = 0; i < length - 1; i++) {
        cout << s.pop() << " ";
    }
    cout << s.pop();


    return 0;
}
