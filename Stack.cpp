#include "Stack.h"

using namespace std;

struct Stack::Element {
    int value;
    Element * next;
};

Stack::Stack() {
    top = nullptr;
    size = 0;
    empty = true;
}

Stack::~Stack() {
    delete top;
}

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
        ptr = nullptr;
        size--;
        if(top == nullptr) empty = true;
        return value;
    } else {
        // Implementacja wyjątku w osobnym pliku zamieszczona ponizej
        throw EmptyStackException();
    }
}
