#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;
int main() {
    cout << endl << "Implementacja kolejki na 2 stosach" << endl;
    auto* kolejka = new Queue();
    for(int i = 1; i <= 5; i++) {
        kolejka->add(i);
    }
    kolejka->takeAll();
    //kolejka->poll();    // pobranie elementu z pustej kolejku spowoduje wyrzucenie wyjatku
    delete kolejka;     // usuniecie obiektu kolejka typu Queue (wywolanie destruktora)
    return 0;
}
