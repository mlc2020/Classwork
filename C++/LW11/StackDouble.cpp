#import <iostream>
#import <cmath>
#import "StackDouble.h"

StackDouble::StackDouble(){
    A = new double[1];
    capacity = 1;
    length = 0;
}

void StackDouble::push(double element) {
    if (length >= capacity) {
        capacity *= 2;
//        std::cout << "Capacity: " << s.capacity << std::endl;
        auto* temp = new double[capacity];
        for(int i = 0; i < length; ++i) {
            temp[i] = A[i];
        }
        delete[] A;
        A = temp;
        length += 1;
//        std::cout << "Push length: " << s.length << std::endl;
        A[length - 1] = element;
//        std::cout << "New last element: " << s.A[s.length - 1] << std::endl;
    } else {
        length += 1;
//        std::cout << "Push length: " << s.length << std::endl;
        A[length - 1] = element;
//        std::cout << "New last element: " << s.A[s.length - 1] << std::endl;
    }
}

double StackDouble::pop(){
    double result = 0;
    if (length < 1) {
        return NAN;
    } else {
        --length;
//        std::cout << "Pop length: " << s.length << std::endl;
//        std::cout << "Pop value: " << s.A[s.length] << std::endl;
        result = A[length];
        return result;
    }
}