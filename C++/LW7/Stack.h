//
// Created by Mihiros on 10/8/2019.
//

#ifndef LW7_STACK_H
#define LW7_STACK_H

struct Stack {
    double* A= new double[1];
    int capacity = 1;
    int length = 0;
};

void push(Stack& s, double element);

double pop(Stack& s);

#endif //LW7_STACK_H
