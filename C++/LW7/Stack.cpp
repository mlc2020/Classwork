#include <iostream>
#include <cmath>
#include "Stack.h"

void push(Stack& s, double element) {
//    std::cout << s.length << std::endl;
    if (s.length >= s.capacity) {
        s.capacity *= 2;
//        std::cout << "Capacity: " << s.capacity << std::endl;
        double* temp = new double[s.capacity];
        for(int i = 0; i < s.length; ++i) {
            temp[i] = s.A[i];
        }
        delete[] s.A;
        s.A = temp;
        s.length += 1;
//        std::cout << "Push length: " << s.length << std::endl;
        s.A[s.length - 1] = element;
//        std::cout << "New last element: " << s.A[s.length - 1] << std::endl;
    } else {
        s.length += 1;
//        std::cout << "Push length: " << s.length << std::endl;
        s.A[s.length - 1] = element;
//        std::cout << "New last element: " << s.A[s.length - 1] << std::endl;
    }
}

double pop(Stack& s) {
    double result = 0;
    if (s.length < 1) {
        return NAN;
    } else {
        --s.length;
//        std::cout << "Pop length: " << s.length << std::endl;
//        std::cout << "Pop value: " << s.A[s.length] << std::endl;
        result = s.A[s.length];
        return result;
    }
}