/*Napisz program, który wczytuje dwie liczby w wybranej precyzji a następnie oblicza i wypisuje wyniki działań (suma, różnica, iloczyn i iloraz) z dokładnością do 12 miejsca po przecinku.

Wyjście:

Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 1
Podaj a: 1
Podaj b: 3
Suma: 4.000000000000
Różnica: -2.000000000000
Iloczyn: 3.000000000000
Iloraz: 0.333333343267


Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 2
Podaj a: 1
Podaj b: 3
Suma: 4.000000000000
Różnica: -2.000000000000
Iloczyn: 3.000000000000
Iloraz: 0.333333333333


Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 1
Podaj a: 0.12345
Podaj b: 10000000
Suma: 10000000.000000000000
Różnica: -10000000.000000000000
Iloczyn: 1234500.000000000000
Iloraz: 0.000000012345


Wybierz precyzję:
[1] pojedyncza precyzja
[2] podwójna precyzja
Wybór: 3
Niepoprawny wybór*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int precyzja; 

    cout << "Wybierz precyzję: " << endl << "[1] pojedyncza precyzja" << endl << "[2] podwójna precyzja";
    cin >> precyzja;
    cout << "Wybór: " << precyzja << endl;

    if ( precyzja != 1 && precyzja != 2 ) {
 
        cout << "Niepoprawny wybór" << endl;

    }

    else if ( precyzja==1 ) {

        float a, b;

        cout << "Podaj a: ";
        cin >> a;

        cout << "Podaj b: ";
        cin >> b;

        cout << fixed << setprecision(12);

        cout << "Suma: " << (a + b) << endl; 
        cout << "Różnica: " << (a - b) << endl;
        cout << "Iloczyn: " << (a * b) << endl;
        cout << "Iloraz: " << (a / b) << endl; 
    }

    else {

        double a, b;

        cout << "Podaj a: " << endl;
        cin >> a;

        cout << "Podaj b: " << endl;
        cin >> b;

        cout << fixed << setprecision(12);

        cout << "Suma: " << (a + b) << endl; 
        cout << "Różnica: " << (a - b) << endl;
        cout << "Iloczyn: " << (a * b) << endl;
        cout << "Iloraz: " << (a / b) << endl;

    }

    return 0;
}