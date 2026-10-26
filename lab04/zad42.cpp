/*Napisz program, który pobiera liczbę całkowitą ‘rozmiar’. Następnie program, wykorzystując pętlę ‘for’, rysuje szachownicę o zadanym rozmiarze. Szachownicę proszę narysować ze znaków podwójnej spacji ‘  ‘ i podwójnego znaku hash ‘##’.


Wyjście:


Rozmiar: 4
##  ##  
  ##  ##
##  ##  
  ##  ##
Wyjście:


Rozmiar: 5
##  ##  ##
  ##  ##  
##  ##  ##
  ##  ##  
##  ##  ##*/


#include <iostream>

using namespace std;

int main() {

    int rozmiar;

    cout << "Rozmiar: ";
    cin >> rozmiar;

    int wiersze, kolumny;
    int nr_komorki = 1;

    for ( int w = 0; w < wiersze; w++ ) {

       



        for ( int k = 0; k < kolumny; k++ ) {

             //co ma sie dziac w kolumnie

            cout << nr_komorki;
            nr_komorki++;



        }
        
        //co ma sie dziac w wierszach

        cout << endl;



    }




    return 0;
}