#include <iostream>

using namespace std;

int main(){
    int pesok, alturam;
    cout<<"ingrese los datos para la calculadora de masa:\nPeso en kilos y altura en metros:";
    cin>>pesok>>alturam;

    int BMI = pesok/alturam*alturam;

     if(BMI <= 18){
         if(BMI >= 18 && BMI <= 25){
                if(BMI >= 25 && BMI <= 30){
                         if(BMI > 30){
                             cout<<"Usted esta obeso";
                            }
                    cout<<"Usted esta con sobrepeso";
         }
             cout<<"Usted esta con el peso ideal";
     }

         cout<<"Usted esta muy bajo de peso";
    }
}
