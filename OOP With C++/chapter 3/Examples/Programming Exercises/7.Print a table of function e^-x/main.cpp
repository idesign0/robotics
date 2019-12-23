//TABLE READ
/*
Solving equations
*/


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void exponentfunction(float,int);

int main(){
    float x=0;
    int n=0;

    cout << endl<< endl;
    cout <<setw(15) <<"X";
    float order =0;
    for(int increment=1;increment<=9;increment++){
    order = float(increment)/10;
    cout <<setw(15)<< order;
    }
    cout << endl<< endl;
    while(x<=9){
        exponentfunction(x,n);
        x++;
        n++;
    }
}

void exponentfunction(float m,int n){

    float * pexpo = new float[10];

        cout<<setw(15)<< n;

        for(int increment=1;increment<=9;increment++){

        float number = m;
        number += float(increment)/10;
        float expo = exp(-number);

        *(pexpo + increment) = expo;
        cout <<setw(15)<< *(pexpo + increment);
        }
         cout <<"\n";
          delete pexpo;
    }




