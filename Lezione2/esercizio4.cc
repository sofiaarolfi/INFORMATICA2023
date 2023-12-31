#include <iostream>
using namespace std;

int main()
{

  double base, altezza;
  double area, perimetro;

  cout << "Introdurre valore base: ";
  cin >> base;
  cout << "Introdurre valore altezza: ";
  cin >> altezza;
  cout << "Rettangolo base = " << base
       << ", altezza = " << altezza << endl;

  area = base * altezza;

  perimetro = 2 * (base + altezza);

  cout << "Base = " << base << endl;
  cout << "Altezza = " << altezza << endl;
  cout << "Area rettangolo = " << area << endl;
  cout << "Perimetro rettangolo = " << perimetro << endl;

  return 0;
}