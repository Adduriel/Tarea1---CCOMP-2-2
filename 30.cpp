#include <iostream>

using namespace std;

int main(){
    int pesok, alturam;
    cout<<"ingrese los datos para la calculadora de masa: ";
    cin>>pesok>>alturam;

    int BMI = pesok/alturam*alturam;

     if(BMI <= 18){
         if else(BMI >= 18 && BMI <= 25){
                if else(BMI >= 25 && BMI <= 30){
                         if else(BMI > 30){
                             cout<<"Usted esta obeso";
                            }
                    cout<<"Usted esta con sobrepeso";
         }
             cout<<"Usted esta con el peso ideal";
     }

         cout<<"Usted esta muy bajo de peso";
    }
}
