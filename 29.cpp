#include <iostream>

using namespace std;

int main(){
    int cara_largo;
    cout<<"Introduce el largo de la cara(0-4): ";
    cin>>cara_largo;

    if(cara_largo == 0){
        cout<<"La cara superficial es 0 y el volumen es 0\n";
    }
    else if(cara_largo == 1){
        cout<<"La cara superficial es 6 y el volumen es 1\n";
    }
    else if(cara_largo == 2){
        cout<<"La cara superficial es 24 y el volumen es 8\n";
    }
    else if(cara_largo == 3){
        cout<<"La cara superficial es 54 y el volumen es 27\n";
    }
    else if(cara_largo == 4){
        cout<<"La cara superficial es 96 y el volumen es 64\n";
    }
    else{
        cout<<"Introduce un valor en el rango\n";
    }
}
