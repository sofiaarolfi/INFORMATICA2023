#include <stdio.h>

using namespace std;

int main()
{
 
  double base, altezza;
  double area, perimetro;


  base = 5.0;
  altezza = 2.0;

  area = base * altezza;

  perimetro = 2 * (base + altezza);


  cout << "Base = " << base << endl;
  cout << "Altezza = " << altezza << endl;
  cout << "Area rettangolo = " << area << endl;
  cout << "Perimetro rettangolo = " << perimetro << endl;

  return 0;
}