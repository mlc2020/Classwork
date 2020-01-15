#include <cstdlib>
#ifndef STACK_H
#define STACK_H

using namespace std;
template <class baseType> class Stack {
private:
    baseType* A;
    int capacity;
    int length;
public:
    void push(baseType n);
    baseType pop();
    bool isEmpty();
    Stack<baseType>() {
        A = new baseType[1];
        capacity = 1;
        length = 0;
    }
    ~Stack();
};

template <class baseType>
Stack<baseType>::~Stack(){
    delete[] A;
}

template <class baseType>
void Stack<baseType>::push(baseType n) {
    if (length == capacity) {
        auto temp = new baseType[length*2];
        for (int i=0 ; i < length ; i++) {
            temp[i] = A[i];
        }
        delete[] A;
        A = temp;
        capacity *= 2;
    }
    A[length] = n;
    length++;
}

template <class baseType>
baseType Stack<baseType>::pop() {
    if (length < 1) {
        exit(0);
    }
    baseType x = A[length-1];
    --length;
    return x;
}

template <class baseType>
bool Stack<baseType>::isEmpty() {
    if (length<1) {
        return true;
    } else {
        return false;
    }
}

#endif