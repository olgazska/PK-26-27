/*Napisz program, który realizuje algorytm przeliczania temperatury podany na załączonym schemacie blokowym. 

Wyjście:

Jednostka: C
Temperatura: 36.6
F = 97.88
C = 36.60
K = 309.75

Jednostka: F
Temperatura: 100
F = 100.00
C = 37.78
K = 310.93

Jednostka: Z
Temperatura: 23
Nieprawidłowa jednostka */


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    char jednostka;
    float temperatura;

    cout << "Jednostka: ";
    cin >> jednostka; 

    cout << "Temperatura: ";
    cin >> temperatura; 

    float tf, tk, tc;

    if (jednostka == 'F') {

        tf = temperatura;
        tc = (tf - 32) * 5/9;
        tk = tc + 273.15;

    }

    else if (jednostka == 'K') {

        tk = temperatura;
        tc = tk - 273.15;
        tf = (tc * 9/5) + 32;

    }

    else if (jednostka == 'C') {

        tc = temperatura;
        tf = (tc * 9/5) + 32;
        tk = tc + 273.15;

    }

    else {

        cout << "Nieprawidłowa jednostka" << endl;

        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "F = " << tf << endl;
    cout << "C = " << tc << endl;
    cout << "K = " << tk << endl;

    return 0;
}