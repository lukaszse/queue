
#include "Queue.h"

using namespace std;

Queue::Queue() {
    mainStack = new Stack();
    auxiliaryStack = new Stack();
}

Queue::~Queue() {
    delete mainStack;
    delete auxiliaryStack;
    cout << "Queue was deleted from memory";
}

void Queue::push(const int value) {
    mainStack->push(value);
}

int Queue::pop() {
    if(mainStack->empty) {
        cout << "Cannot pop element from empty queue" << endl;
        return ELEMENT_NOT_EXIST;
    }
    while (mainStack->size > 1) {
        auxiliaryStack->push(mainStack->pop());
    }
    int value = mainStack->pop();
    Stack* ptr = mainStack;
    mainStack = auxiliaryStack;
    auxiliaryStack = ptr;
    return value;
}