#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout << "Precision set to 3 digits \n\n";
    cout.precision(3);

    cout.width(10);
    cout << "VALUE";
    cout.width(15);
    cout<<"SQRT_OF_VALUE"<<"\n";

    for(int n=1;n<=5;n++){
    cout.width(8);
    cout << n;
    cout.width(13);
    cout<<sqrt(n)<<"\n";

    }

    cout<<"\n Precision set to 5 digits \n\n";
    cout.precision(5);
    cout << " sqrt(10) = " << sqrt(10)<<"\n\n";
    cout.precision(0);
    cout << " sqrt(10) = " << sqrt(10)<<"\n\n";
    return 0;
}
