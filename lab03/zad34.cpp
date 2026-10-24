/*Napisz program, który wykorzystując pętlę obliczy wartość silni dla podanej liczby naturalnej N. Program sprawdza poprawność podanego N i wypisuje komunikat "N musi być nieujemne" w przypadku niepoprawnej wartości.

 
Wyjście:

N: 3
Silnia = 6

N: -10
N musi być nieujemne
*/


#include <iostream>

using namespace std;

int main () {

    int N;

    cout << "N: ";
    cin >> N;

    if ( N < 0 ) {

        cout << "N musi być nieujemne" << endl;

    }

    else {

        int silnia = 1;

        while ( N > 0 ) {

            silnia = silnia * N;
            N = N - 1; 

        }

        cout << "Silnia = " << silnia << endl;

    }

    return 0;
}