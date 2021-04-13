
#include "Queue.h"

using namespace std;

void Queue::push(int value) {
    mainStack->push(value);
}

int Queue::pop() {
    if(mainStack->empty) {
        cout << "Cannot pop element from empty queue" << endl;
        return ELEMENT_NOT_EXIST;
    }
    while (!mainStack->size == 1) {
        secondStack->push(mainStack->pop());
    }
    int value = mainStack->pop();
    Stack* ptr = mainStack;
    mainStack = secondStack;
    secondStack = mainStack;
    return value;
}
