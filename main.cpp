#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;
int main() {
    cout << "Implementacja stosu" << endl;

    auto* stos = new Stack();

    cout << stos->pop() << endl;

    stos->push(1);
    stos->push(2);
    stos->push(3);

    cout << stos->pop() << endl;
    cout << stos->pop() << endl;
    cout << stos->pop() << endl;
    cout << stos->pop() << endl;
    cout << stos->pop() << endl;

    delete stos;

    cout << endl << "Implementacja kolejki na 2 stosach" << endl;

    auto* kolejka = new Queue();

    kolejka->push(1);
    kolejka->push(2);
    kolejka->push(3);

    cout << kolejka->pop() << endl;
    cout << kolejka->pop() << endl;
    cout << kolejka->pop() << endl;
    cout << kolejka->pop() << endl;
    cout << kolejka->pop() << endl;

    return 0;
}
