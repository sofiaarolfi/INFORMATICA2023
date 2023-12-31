 include <iostream>
using namespace std;

int main() {
    double numero;
    cout << "Introdurre la temperatura in Celsius"; 
    cin >> numero;

    double g;

    int scelta; 
    cout << "Premere 1 per conversione a Kelvin"; 
    cout << "Premere 2 per conversione a Fahrenheit";
    cin >> scelta; 

if (scelta == 1) { 
    cout << " T(Kelvin) = " << numero + 273.15; 
} else { 
    cout << "T(Fahrenheit) = " << numero * 9.0 / 5.0 + 32.0; 
}

}