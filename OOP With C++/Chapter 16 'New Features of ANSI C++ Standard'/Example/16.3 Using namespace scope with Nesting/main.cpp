#include<iostream>
#include<string>

using namespace std;

namespace Name1{
    double x=4.56;
    int m=100;

    namespace name2{ //nested name space
        double y=1.23;
    }
}

    namespace { // unname space
        int m=200;
    }

int main(){
    cout <<" X : "<<Name1::x<< endl;
    cout <<" M : "<<Name1::m<< endl;
    cout <<" Y : "<<Name1::name2::y<< endl;
    cout <<" M : "<<m<< endl; // m global
    return 0;
}
