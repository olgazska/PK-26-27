/*Napisz program, który przyjmuje dwa parametry:

parametr pierwszy to jedna z opcji:
1 – przeliczanie jednostek Celsjusza na Fahrenheita,
2 – przeliczanie jednostek Fahrenheita na Celsjusza,
parametr drugi to liczba rzeczywista wyrażająca temperaturę.
Program, w zależności od parametru pierwszego, przelicza podaną w parametrze drugim temperaturę między jednostkami Fahrenheita i Celsjusza. Po przeliczeniu program wypisuje obliczoną wartość z dokładnością do dwóch miejsc po przecinku na ekran.

Uwagi:

program ma być odporny na podawanie wartości mniejszych od zera bezwzględnego, wypisując komunikat "Zbyt zimno na liczenie!".
Wyjście:

Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 1
Podaj temperaturę: 36.6
36.60 st. Celsjusza to 97.88 st. Fahrenheita


Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 2
Podaj temperaturę: 100
100.00 st. Fahrenheita to 37.78 st. Celsjusza

Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 1
Podaj temperaturę: -300
Zbyt zimno na liczenie!*/


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int wybor;

    cout << "Wybierz sposób konwersji:" << endl << "[1] Celsjusza na Fahrenheita" << endl << "[2] Fahrenheita na Celsjusza" << endl;
    cout << "Wybór: ";
    cin >> wybor;

    float temp;

    cout << "Podaj temperaturę: ";
    cin >> temp;

    if (wybor == 1 && temp <= -273.15) {

        cout << "Zbyt zimno na liczenie!" << endl;

        return 1;
    }

    else if (wybor == 1 && temp > -273.15) {

        float tf = (temp * 9/5) + 32;

        cout << fixed << setprecision(2);
        cout << temp << " st. Celsjusza to " << tf << " st. Fahrenheita" << endl;

        return 2;
    }

    else if (wybor == 2 && temp <= -459.67) {

        cout << "Zbyt zimno na liczenie!" << endl;

        return 3;
    }

    else if (wybor == 2 && temp > -459.67) {

        float tc = (temp - 32) * 5/9;

        cout << fixed << setprecision(2);
        cout << temp << " st. Fahrenheita to " << tc << " st. Celsjusza";

        return 4;
    }
    
    return 0;
}