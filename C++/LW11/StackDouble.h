#ifndef LW11_STACK_H
#define LW11_STACK_H

class StackDouble {
    double* A= new double[1];
    int capacity = 1;
    int length = 0;

public:
    void push(double element);
    double pop();
    StackDouble();
};

#endif //LW11_STACK_H
