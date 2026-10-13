#include <iostream> 

using namespace std;

int main() {

  int A , B , C;

  cout << "A = ";
  cin >> A; 

  cout << "B = ";
  cin >> B; 

  cout << "C = ";
  cin >> C; 

  int pole = (2 * A * B) + (2 * A * C) + (2 * B * C);
  int objetosc = A * B * C;

  cout << "Pole: " << pole << endl;
  cout << "Objętość: " << objetosc << endl;

  return 0;
}