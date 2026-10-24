/*Napisz program, który wczytuje liczbę rzeczywistą (float) z dokładnością do jednego miejsca po przecinku. Liczba ta ma być z zakresu 0.0 ... 9.0 i wyrażać liczbę punktów z kolokwium.

Program, wykorzystując instrukcję warunkową ‘if-else’, podaje (wypisuje na ekran) wynikającą z tych punktów ocenę według schematu:

0.0 ... 4.4 – ocena niedostateczny (2.0),
4.5 ... 5.2 – ocena dostateczny (3.0),
5.3 ... 6.2 – ocena ponad dostateczny (3.5),
6.3 ... 7.2 – ocena dobry (4.0),
7.3 ... 8.2 – ocena ponad dobry (4.5),
8.3 ... 9.0 – ocena bardzo dobry (5.0).
W innych przypadkach wyświetlany jest komunikat "Nieprawidłowa liczba punktów!".

Wyjście:

Punkty: 5.1
Uzyskana ocena to dostateczny (3.0)


Punkty: 10.5
Nieprawidłowa liczba punktów!*/

#include <iostream>

using namespace std;

int main() {

    float punkty;

    cout << "Punkty: ";
    cin >> punkty;

    if ( punkty < 0.0 || punkty > 9.0 ) {

        cout << "Nieprawidłowa liczba punktów!" << endl;

    }

    else if ( punkty <= 4.4 ) {

        cout << "Uzyskana ocena to niedostateczny (2.0)" << endl;

    }

    else if ( punkty <= 5.2 ) {

        cout << "Uzyskana ocena to dostateczny (3.0)" << endl;

    }

    else if ( punkty <= 6.2 ) {

        cout << "Uzyskana ocena to ponad dostateczny (3.5)" << endl;

    }

    else if ( punkty <= 7.2 ) {

        cout << "Uzyskana ocena to dobry (4.0)" << endl;

    }

    else if ( punkty <= 8.2 ) {

        cout << "Uzyskana ocena to ponad dobry (4.5)" << endl;

    }


    else {

        cout << "Uzyskana ocena to bardzo dobry (5.0)" << endl;

    }

    return 0;
}