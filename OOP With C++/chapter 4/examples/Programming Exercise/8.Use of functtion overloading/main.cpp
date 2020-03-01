#include <iostream>
#include <cmath>
using namespace std;

double sqrfun(double,int n=2);
int sqrfun(int,int n=2);

int main(){

    double m; int n;
    cout << "Enter the value to be squared : ";
    cin >> m;

    cout << "Enter the value of exponent : ";
    cin >> n;

    cout<<sqrfun(m,n);

}

double sqrfun(double m,int n){
    return pow(m,n);
}

int sqrfun(int m,int n){
    return pow(m,n);
}

