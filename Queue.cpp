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

void Queue::add(const int value) {
    mainStack->push(value);
}

int Queue::poll() {
    if(auxiliaryStack->empty) {
        while (!mainStack->empty) {
            auxiliaryStack->push(mainStack->pop());
        }
    }
    try {
        return auxiliaryStack->pop();
    } catch (EmptyStackException & e) {
        throw EmptyQueueException(); // Implementacja wyjątku w osobnym pliku zamieszczona ponizej
    }
}