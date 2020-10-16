#include<iostream>
#include<limits>
using namespace std;

int main(){

    // Overflow in signed
    signed int of = numeric_limits<signed int>::max() +1;
    cout << of << endl; //-2,147,483,648

    // Underflow in signed
    of = 0 - 1;
    cout << of << endl; //-1

    // Overflow in unsigned
    unsigned int uf = numeric_limits<unsigned int>::max() +1;
    cout << uf << endl; // 0

    // Underflow in unsigned
    uf = 0 - 1;
    cout << uf << endl; // 4,294,967,295

    int i = 1;
    cout << i/0 << endl; // warning : division by zero, runtime error

}
