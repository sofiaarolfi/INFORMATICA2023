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

  // preparare coutcon 10 cifre significative
  cout.precision(10);

  // stampare risultati con fixed
  cout << fixed;
  cout << "Area = " << area << "\tPerimetro = " << perimetro << endl;

  // stampare risultati con scientific
  cout << scientific;
  cout << "Area = " << area << "\tPerimetro = " << perimetro << endl;

  return 0;
}