//TABLE READ
/*
solving equations
*/


#include <iostream>
#include <cmath>
using namespace std;


double sum(int);

int main(){

    int n=15;


    cout << "Sum of  " << n <<" : " << sum(n);
}

double sum(int n){

    double sum1 = 0;
    double m ;

    for(float i=1;i<=n;i++){
        float ii = float(1/i);

        m = pow(ii,i);

        sum1 += m ;
    }

    return sum1;

}


