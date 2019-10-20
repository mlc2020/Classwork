#include <iostream>
#include <cmath>
#include "Stack.h"

int main() {
    Stack s;
    std::string operations;
    int i = 0;
    double left = 0;
    double right = 0;
    bool compute = false;
    bool fail = false;
    double result = 0;
    do {
        std::cin >> operations;
        if (operations.at(i) == '.' || isdigit(operations.at(i))) {
            push(s, stod(operations));
        } else {
            if (operations.at(i) == '+') {
                right = pop(s);
                left = pop(s);
                push(s, left + right);
            } else if (operations.at(i) == '-') {
                right = pop(s);
                left = pop(s);
                push(s, left - right);
            } else if (operations.at(i) == '*') {
                right = pop(s);
                left = pop(s);
                push(s, left * right);
            } else if (operations.at(i) == '/') {
                right = pop(s);
                left = pop(s);
                push(s, left / right);
            } else if (operations.at(i) == '=') {
                result = pop(s);
                std::cout << result << std::endl;
                compute = true;
            } else {
                std::cout << "[ERROR] invalid operator: " << operations.at(i) << std::endl;
                fail = true;
            }
        }

    } while (!fail && !compute);
    delete[] s.A;
    return 0;
}