#include<iostream>
using namespace std;

int main(){
    int p=10;
    double q=20.33;
    int *x=&p;
    double *y=&q;

    cout << "Value 1 : " << *x << endl;
    cout << "Value 2 : " << *y << endl;
    return 0;
}
