#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {
    cout << endl << "Implementacja kolejki na 2 stosach" << endl;
    auto *kolejka = new Queue();
    int wyborOperacji = -1;
    int liczba;

    do {
        cout << "\nNacisnij przycisk: " << endl;
        cout << "1. Aby dodac liczbe do kolejki" << endl;
        cout << "2. Aby pobrac element z kolejki" << endl;
        cout << "3. Aby zakonczyc" << endl;
        cin >> wyborOperacji;

        if (wyborOperacji < 0 || wyborOperacji > 3) {
            cout << "Wprowadz liczzbe z zakrsu 1 - 3" << endl;
        }

        switch (wyborOperacji) {
            case 1:
                cout << "Podaj liczbe ktora chcesz dodac do kolejki" << endl;
                cin >> liczba;
                kolejka->add(liczba);
                cout << "\nDo kolejki dodano liczbe: " << liczba << endl;
                kolejka->printState();
                break;

            case 2:
                try {
                    liczba = kolejka->poll();
                    cout << "\nLiczba pobrana z kolejki to: " << liczba << endl;
                    kolejka->printState();
                } catch (EmptyQueueException ex) {
                    cout << "\nNie mozna pobrac elementu z pustej kolejki" << endl;
                }
                break;
        }

    } while (wyborOperacji != 3);
}