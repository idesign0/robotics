#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int intvar = 255;
    float floatvar = 25.54;

    cout<<" Int Var. = "<<intvar<<endl;
    cout<<" Float Var. = "<<floatvar<<endl;
    cout<<" Int float(intvar) = "<<float(intvar)<<endl;
    cout<<" Int int(floatvar) = "<<int(floatvar)<<endl;


    // floating
    typedef int int_p;
    cout << int_p(floatvar) ;
}

