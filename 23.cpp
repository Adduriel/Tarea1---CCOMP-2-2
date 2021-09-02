#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e;
    cout<<"Ingrese los numeros: ";
    cin>>a>>b>>c>>d>>e;
    if(a>b && b>c && c>d && d>e){
        cout<<"El menor numero es "<<e<<"El mayor numero es"<<a;
    }
    else if(a<b && b<c && c<d && d<e){
        cout<<"El menor numero es "<<a<<"El mayor numero es"<<e;
    }
}
