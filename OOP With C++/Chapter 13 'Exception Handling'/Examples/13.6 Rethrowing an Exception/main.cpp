#include<iostream>
#include<string.h>
using namespace std;

void divide(double x,double y){
    cout << "Inside Function \n";
    try{
        if(y == 0.0){
            throw y;
        }else
            cout << "Division = " << x/y << "\n";
    }catch(double){
            cout << "Caught double inside the function !\n";
            throw;
    }
    cout << "End of Function !\n\n";
}

int main(){
    cout  << "Inside main \n";
    try{
    divide(10.5,2);
    divide(10.5,0);
    }
    catch(double){
        cout << "Caught double inside main !\n";
    }
    cout << "End of main ! \n";
    return 0;
}
