#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x = 55;
    int y = 4242;
    int z = 101;
    float s = 356.256;

    cout <<setw(15) <<"basic:" <<setw(8) << x << endl;
    cout <<setw(15) <<"very basic:" <<setw(8) << y << endl;
    cout <<setw(15) <<"basic basic:" <<setw(8) << z << endl;

    // floating
    typedef int int_p;
    cout <<fixed<<setprecision(2)<< s << endl;
    cout << int_p(s) ;
}

