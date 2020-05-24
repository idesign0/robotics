#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer value :";cin>>num;

    cout << "\nThe hexadecimal, octal and decimal representation of "<<num<<" is : ";
    cout.setf(ios::hex,ios::basefield);
    cout<<num<<", ";
    cout.setf(ios::oct,ios::basefield);
    cout<<num<<" and ";
    cout.setf(ios::dec,ios::basefield);
    cout<<num<<" respectively";
    return 0;
}
