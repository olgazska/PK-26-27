/*Napisz program, który sprawdzi czy podana liczba całkowita w systemie dziesiętnym jest liczbą parzystą i czy jest podzielna przez 8 i 16. Program wypisuje podzielność słowami "TAK" i "NIE" oraz wypisuje podaną liczbę w postaci ósemkowej i szesnastkowej.

Podaj liczbę: 27
Parzysta: NIE
Podzielna przez 8: NIE                                                          
Podzielna przez 16: NIE
Ósemkowo: 33
Szesnastkowo: 1b*/

#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    if (liczba % 2 == 0) {

        cout << "Parzysta: TAK" << endl;
    }

    else {

        cout << "Parzysta: NIE" << endl;
    }

    if (liczba % 8 == 0) {

        cout << "Podzielna przez 8: TAK" << endl;
    }

    else {

        cout << "Podzielna przez 8: NIE" << endl;
    }

    if (liczba % 16 == 0) {

        cout << "Podzielna przez 16: TAK" << endl;
    }

    else {

        cout << "Podzielna przez 16: NIE" << endl;
    }

    cout << "Ósemkowo: " << oct << liczba << endl;
    cout << "Szesnastkowo: " << hex << liczba << endl;

    return 0;
}