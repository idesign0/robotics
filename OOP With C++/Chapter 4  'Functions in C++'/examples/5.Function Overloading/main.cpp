#include <iostream>
#include <iomanip>

using namespace std;

int area(int);
int area(int,int);
double area(double);
float area(float,float,float);

int main(){
    cout << "Calling the the area function to calculate area of square (width 5) : " << area(5) << endl ;
    cout << "Calling the the area function to calculate area of rectangular (width 5,6) : " << area(5,6) << endl ;
    cout << "Calling the the area function to calculate area of circle (width 5.5) : " << area(4.5) << endl ;

    //default arguments

    cout << "Calling the the area function to calculate area of circle (width 5.5) : " << area(4,4,3.14) << endl ;
}

int area(int a){
    return a*a;
}

int area(int a,int b){
    return a*b;
}

double area(double a){
    return 3.14*a*a;
}


float area(float a=1,float b=2,float c=3){
    return a*b*c;
}
