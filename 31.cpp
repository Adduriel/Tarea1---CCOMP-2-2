#include <iostream>

using namespace std;

int main(){
    int millas, gaso, garaje, peaje;
    cout<<"Ingresa los datos en este orden: \n";
    cout<<"Total de millas por día: \n";
    cin>>millas;
    cout<<"Costo por galon de gasolina: \n";
    cin>>gaso;
    cout<<"Costo por garaje: \n";
    cin>>garaje;
    cout<<"Costo por peaje: \n";
    cin>>peaje;

    int total = (millas*gaso)/(garaje+peaje);

    cout<<"El costo de todo es: "<<total;
}
