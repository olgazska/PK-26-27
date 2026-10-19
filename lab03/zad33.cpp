/*Napisz program, który wyznacza sumę N kolejnych liczb naturalnych począwszy od zadanej wartości A. Program wyświetla odpowiednio komunikaty:

N musi być większe niż 0
A nie jest liczbą naturalną
 
Wyjście:

N: 3
A: 2
Suma = 9

N: -10
N musi być większe niż 0
*/



#include <iostream>

using namespace std;

int main() {

    int N;

    cout << "N: ";
    cin >> N;

    if ( N < 0 ) {

        cout << "N musi być większe niż 0" << endl;

        return 1;
    }

    int A; 

    cout << "A: ";
    cin >> A; 

    if ( A < 0 ) {

        cout << "A nie jest liczbą naturalną" << endl;

        return 2;
    }

    int suma = A;

    while ( N > 1 ) {

        A = A + 1;
        suma = suma + A;
        N = N - 1;

    }

    cout << "Suma = " << suma << endl;

    return 0;
}