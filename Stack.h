#include <iostream>
#include <climits>
#include "EmptyStackException.h"

#ifndef INC_2STACKSTOQUEUE_STACK_H
#define INC_2STACKSTOQUEUE_STACK_H

class Stack {

private:
    struct Element;
    Element* top{};

public:
    int size{};
    bool empty{};

    Stack();
    ~Stack();
    void push(int);
    int pop();
};


#endif //INC_2STACKSTOQUEUE_STACK_H
