#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Ingresa tres numeros: ";
    cin>>a>>b>>c;

    if(a % c == 0){
        if(b % c == 0){
            cout<<"Los numeros primeros son factores del tercero.";
        }
        else{
            cout<<"un numero o los dos no son factores del tercero.";
    }
    }
}
