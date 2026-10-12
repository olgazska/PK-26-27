<<<<<<< HEAD
/*Napisz program, który:

wypisuje na ekran komunikat: „Podaj imie: ”,
wczytuje z klawiatury imię użytkownika,
wypisuje na ekran komunikat: „Siema …!” i podaje imię użytkownika.
Wyjście:

Podaj imię: Tomek
Siema Tomek!*/


#include <iostream> 
=======
/*
Napisz program, który:

- wypisuje na ekran komunikat: „Podaj imie: ”,
- wczytuje z klawiatury imię użytkownika,
- wypisuje na ekran komunikat: „Siema …!”
  i podaje imię użytkownika.

Wyjście:

Podaj imię: Tomek
Siema Tomek!
*/

#include <iostream>
#include <string>
>>>>>>> 4e42700cff7bd6a650c80dcace81adcc3108add2

using namespace std;

int main() {

<<<<<<< HEAD
string imie;

cout << "podaj imię:";

cin >> imie;

cout << "siema " << imie << "!" << endl;

return 0;
=======
    /*
    string jest typem służącym do przechowywania tekstu.

    Każda zmienna musi mieć:
    - typ,
    - nazwę.

    Tutaj:
        typ   -> string
        nazwa -> imie
    */
    string imie;

    cout << "Podaj imię: ";

    // cin >> wczytuje wartość wpisaną przez użytkownika
    // i zapisuje ją w zmiennej imie.
    cin >> imie;

    /*
    Za pomocą operatora << możemy połączyć w jednym cout:
    - tekst,
    - wartość zmiennej,
    - kolejny fragment tekstu.
    */
    cout << "Siema " << imie << "!" << endl;

    return 0;
>>>>>>> 4e42700cff7bd6a650c80dcace81adcc3108add2
}