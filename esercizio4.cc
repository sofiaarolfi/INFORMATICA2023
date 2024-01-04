#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main(){

    char nome [20]; 
    string cognome; 
    int matricola;
    fstream foutput; 

    cout << "Nome: " << endl; 
    cin >> nome; 

    cout << "Cognome: "<< endl; 
    cin >> cognome; 

    cout << "Matricola: " << endl; 
    cin >> matricola; 

    cout << cognome <<", "<< nome << " è registrato/a con numero di matricola: " << matricola << endl; 



    if (foutput.good())
    {
      foutput << cognome << ", " << nome
	      << " è registrato con numero matricola "
	      << matricola << ".\n";  
    }
    else
    cout << "Errore: file is not good!" << endl;


    foutput.close();



    return 0;
    
}