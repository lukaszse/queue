#include "Stack.h"

#ifndef INC_2STACKSTOQUEUE_QUEUE_H
#define INC_2STACKSTOQUEUE_QUEUE_H


class Queue {

private:
    Stack* mainStack = new Stack;
    Stack* auxiliaryStack = new Stack;

public:
    void push(int);
    int pop();
};


#endif //INC_2STACKSTOQUEUE_QUEUE_H
