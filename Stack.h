#include <iostream>
#include <climits>
#include "EmptyStackException.h"

#ifndef INC_2STACKSTOQUEUE_STACK_H
#define INC_2STACKSTOQUEUE_STACK_H
#define ELEMENT_NOT_EXIST INT_MIN

class Stack {

private:
    struct Element;
    Element* top{};

public:
    int size{};
    bool empty{};

    Stack();
    ~Stack();
    Stack(const Stack &);
    void push(int);
    int pop();
};


#endif //INC_2STACKSTOQUEUE_STACK_H
