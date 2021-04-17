#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;
int main() {

    cout << endl << "Implementacja kolejki na 2 stosach" << endl;
    auto* kolejka = new Queue();
    int ILOSC_ELEMENTOW = 4;

    for(int i = 1; i <= ILOSC_ELEMENTOW; i++) {
        kolejka->add(i);
    }

    for(int i = 1; i <= ILOSC_ELEMENTOW; i++) {
        cout << kolejka->poll() << endl;
    }

    delete kolejka;
    return 0;
}
