#include "Stack.h"

template <typename baseType>
class Stack {
private:
    baseType* A;
    int capacity;
    int length;
public:
    void push(baseType n);
    baseType pop();
    bool isEmpty();
    Stack();
}

Stack<baseType>::Stack() {
    A = new baseType[1];
    capacity = 1;
    length = 0;
}

Stack<baseType>::~String(){
    delete[] A;
}

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
    A[length+1] = n;
    ++length;
}

baseType Stack<baseType>::pop() {
    if (length < 1) {
        exit(0);
    }
    baseType x = A[length];
    --length;
    return x;
}

bool Stack<baseType>::isEmpty() {
    if (length==0) {
        return true;
    } else {
        return false;
    }
}