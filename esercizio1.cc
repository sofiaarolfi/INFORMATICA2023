#include <iostream> 
using namespace std; 

int main(){

    int n; 
    cout<< "introdurre il valore di n"<<endl; 
    cin>> n; 

    int r = 2;
    int incremento;
    int decremento;
    int divisione;
    int resto; 
    
    incremento = n; 
    incremento ++; 

    decremento = n;
    decremento --; 

    divisione = n / r; 
    resto = n % r;

    cout << "incremento: " << incremento << endl;
    cout << "decremento: " << decremento << endl;
    cout << "divisione : " << divisione << endl;
    cout << "resto     : " << resto << endl;  

    return 0; 
}