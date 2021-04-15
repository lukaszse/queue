#include "Stack.h"

using namespace std;

Stack::Stack() {
    top = nullptr;
    size = 0;
    empty = true;
}

struct Stack::Element {
    int value;
    Element * next;
};

void Stack::push(const int value) {
    Element* ptr = top;
    top = new Element;
    top->value = value;
    top->next = ptr;
    size++;
    empty = false;
}

int Stack::pop() {
    if(top != nullptr) {
        int value = top->value;
        Element *ptr = top;
        top = top->next;
        delete ptr;
        ptr = NULL;
        size--;
        if(size == 0) {         // if(top == nulllptr) can be use instead
            empty = true;
        }
        return value;
    } else {
        cout << "Cannot pop element from empty stack" << endl;
        return ELEMENT_NOT_EXIST;
    }
}


