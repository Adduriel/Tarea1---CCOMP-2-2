#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout<<"Ingrese los numeros: ";
    cin>>a>>b;


    int sum = a+b;
    if (sum % 2 == 0){
            cout<<"Es multiplo de 2: ";
    }
    else{
        cout<<"No es multiplo de 2: ";
    }
}
