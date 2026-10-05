/*Napisz program do obliczania prostych odsetek dla konkretnego klienta banku dla zadanej kwoty P (typ float) , okresu kredytowania T (int) oraz stopy procentowej R (float). Wynikiem jest to wartość wyrażenia I = (P * T * R )/100. Wypisz wynik zarówno jako typ float oraz typ int. Wynik w postaci wartości rzeczywistej wyświetl do dwóch miejsc po przecinku

Wyjście:

P = 2500.50
T = 2
R = 3.66
Wynik rzeczywisty: 183.04
Wynik całkowity: 183*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

float P, R, I; 
int T;

cout << "P = ";
cin >> P;

cout << "T = ";
cin >> T;

cout << "R = ";
cin >> R;

I = (P * T * R )/100;

cout << fixed << setprecision(2);
cout << "Wynik rzeczywisty: " 












    return 0;
}