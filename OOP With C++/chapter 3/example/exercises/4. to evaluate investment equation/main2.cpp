/*
evaluate the investment equation
v = p(1+r)^n
and make table for difference values of p , r , n.

P = Principal amount ;
v = value of money;
n = years;
r= rate of interest

at first year
v = p(1+r)
v=p

(at end of first year)
*/

// using for loops

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
        int n,p;
        float r,v;

         for(r=0.1;r<=0.2;r+=0.01){

            for(p=1000;p<=10000;p+=1000){


                cout << endl<<"if P : "<< p <<" r : "<< r << " Then valuea are : " <<endl<<endl;

                for(n=0;n<=10;n++){

                    v = p*pow(r+1,n);

                cout <<setw(50)<<n<<"th year value for money : " << v << endl;

                }
            }

        }

}
