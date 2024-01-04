#include <iostream> 
using namespace std; 

int main(){

    int n; 
    cout <<"Inserire valore di n:" << endl; 
    cin >> n; 

    if(n % 2 == 0)
    cout<< n << " è pari" << endl;

    else
    cout<< n <<" è dispari"<< endl; 

    return 0;
}