#include <limits>
#include "Stack.h"
#include "EmptyStackException.h"
#include "EmptyQueueException.h"

#ifndef INC_2STACKSTOQUEUE_QUEUE_H
#define INC_2STACKSTOQUEUE_QUEUE_H

class Queue {

private:
    Stack* mainStack;
    Stack* auxiliaryStack;

public:
    Queue();
    ~Queue();
    void add(int);
    int poll();
    void takeAll();
    void printState();
};
#endif //INC_2STACKSTOQUEUE_QUEUE_H