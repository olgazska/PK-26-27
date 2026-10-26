/*Napisz program, który pobiera liczbę całkowitą ‘wysokosc’. Następnie program, wykorzystując dowolne pętle, rysuje w konsoli choinkę ze znaków '*'. 


Wyjście:


Wysokość: 5
    *
   ***
  *****
 *******
*********
Wyjście:


Wysokość: 3
  *
 ***
*****            */

#include <iostream>

using namespace std;

int main() {

    int wysokosc;

    cout << "Wysokość: ";
    cin >> wysokosc;

    for (int w = 0; w < wysokosc; w++) {

        for (int s = (wysokosc - 1); s > 0; s--) {

            cout << " ";
        }

        for (int g = 1; g < (wysokosc + 2); g = g + 2) {

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}