#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  int R;
  const float PI = 3.14;

  cout << "R = ";
  cin >> R;

  float obwod = 2 * PI * R;
  float pole = PI * R * R;

  cout << fixed << setprecision(2);
  cout << "Obwód: " << obwod <<  endl;

  cout << fixed << setprecision(2);
  cout << "Pole: " << pole << endl;
  
  return 0;
}