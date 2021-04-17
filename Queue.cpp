#include "Queue.h"

using namespace std;

Queue::Queue() {
    mainStack = new Stack();
    auxiliaryStack = new Stack();
}

Queue::Queue(const Queue & queue) {
    mainStack = queue.mainStack;
    auxiliaryStack = queue.auxiliaryStack;
}

Queue::~Queue() {
    delete mainStack;
    delete auxiliaryStack;
    cout << "Queue was deleted from memory" << endl;
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

// pomocnicza metoda do wypisania wszystkich elementow kolejki
void Queue::takeAll() {
    cout << "Queue content: " << endl;
    while (mainStack->size + auxiliaryStack->size > 0) {
        if(mainStack->size + auxiliaryStack->size > 1) {
            cout << poll() << ", ";
        } else {
            cout << poll();
        }
    }
    cout << endl << endl;
}

