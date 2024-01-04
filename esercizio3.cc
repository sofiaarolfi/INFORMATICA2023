#include <iostream>
#include <string>
using namespace std; 

int main(){

    char nome [20]; 
    string cognome; 
    int matricola; 

    cout << "Nome: " << endl; 
    cin >> nome; 

    cout << "Cognome: "<< endl; 
    cin >> cognome; 

    cout << "Matricola: " << endl; 
    cin >> matricola; 

    cout << cognome <<", "<< nome << " è registrato/a con numero di matricola: " << matricola << endl; 

    return 0;
    
}