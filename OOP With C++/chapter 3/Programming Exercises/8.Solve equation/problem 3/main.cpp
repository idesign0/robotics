//TABLE READ
/*
Solving equations
*/


#include <iostream>
#include <cmath>
using namespace std;

int factorial(int);
double sum(double,double);

int main(){

    double x=10,n=15;


    cout << "Sum of  " << x <<" : " << sum(x,n);
}

double sum(double x,double n){
    double sum1 = 0;
    int i =1;
    int mm=1;
    double m ;

      x = 10 * 3.14159 /180;

    for(int i=0;i<=n;i+=2){

        m = (pow(x,i)/factorial(i));

        double n = m*(double)mm;

        cout << n << endl;

        sum1 += n ;

        mm *= -1;
    }

    return sum1;

}

int factorial(int i){

    if(i<=1){
        return 1;
    }else{
        return i * factorial(i-1);
    }
}


