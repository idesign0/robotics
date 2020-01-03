#include <iostream>

using namespace std;

int factorial(int);

int main(){

    //prompt
    cout << "Enter your number to get its Factorial value : " ;

    int number =3;

 //   cin >> number;

    int factorialnum = factorial(number);

    cout << number <<"th factorial value is : "<< factorialnum << endl;
}

int factorial(int a){

    if(a==1){
            return 1;
    }
    return a*factorial(a-1);
}
