#include <iostream>

using namespace std;

int main() {

  int a;
  int b;

  cout << "Podaj a: ";
  cin >> a;

  cout << "Podaj b: ";
  cin >> b;

  int suma = a + b;
  int roznica = a - b;
  int iloczyn = a * b;

  cout << "Suma : " << suma << endl;
  cout << "Różnica : " << roznica << endl;
  cout << "Iloczyn : " << iloczyn << endl;
 
  return 0;
}