/*Napisz program, który realizuje algorytm wyznaczania maksimum z N podanych liczb całkowitych, który zaprezentowany jest na załączonym schemacie blokowym. 

Wyjście:

N: 2
A: 1
A: 5
Maksimum = 5

N: 1
A: 3
Maksimum = 3
*/

#include <iostream>

using namespace std;

int main () {

    int N; //ilosc liczb 

    int A; // liczby 

    cout << "N: ";
    cin >> N;

    cout << "A: ";
    cin >> A;
    
    int liczba = 1;
    int max;
    
    for (int i=0; i<N; i++) {

        max = A;

        while ( liczba >= N) {

            cout << "A: ";
            cin >> A;

            liczba = liczba + 1;
        
            if ( A > max ) {

                max = A;

            }

            cout << "Maksimum = " << max << endl;
             
        }
    
    }
    
    return 0;
}