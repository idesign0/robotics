#include <iostream>

using namespace std;

double area(double,double);
double area(double);

int main(){

    int r,b,h;

    cout << "To find area of Triangle give Height and Width : ";
    cin >> h;
    cin >> b;

    cout << "Area of Triangle is : " << area(h,b) << endl << endl;

    cout << "To find area of Circle give Radius : ";
    cin >> r;

    cout << "Area of Circle is : " << area(r);

    }

double area(double h,double b){
        return (h*b)/3;
}

double area(double r){
        return 22*r*r/7;
}

