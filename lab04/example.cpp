#include <iostream>

using namespace std;

// używając pętli for napisz odliczanie od zera do zadanej przez użytkownika wartości
// to samo, ale od zadanej wartości odliczanie w dół (wartości w obu przypadkach wczytujemy z konsoli)

// wartość od zera co drugą, do zadanej przez użytkownika, np.:
// N = 8
// 0, 2, 4, 6, 8



int main() {

    int N;
    cin >> N;

    for (int i=0; i<=N; i++) {

        cout << i;

        if (i != N) {

            cout << ", " << endl;
        }
    }

    for (int i=N; i>=0; i--) {

        cout << i;

        if (i != 0) {

            cout << ", " << endl;
        }
    
    }

    for (int i=0; i<=N; i=i+2) {

        cout << i << endl;
    }

    return 0;
}