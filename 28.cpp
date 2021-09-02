#include <iostream>

using namespace std;

int main(){
    int num=4567;
    cout<<num%10;
    num/=10;
    cout<<num%10;
    num/=10;
    cout<<num%10;
    num/=10;

    cout<<num;
}

