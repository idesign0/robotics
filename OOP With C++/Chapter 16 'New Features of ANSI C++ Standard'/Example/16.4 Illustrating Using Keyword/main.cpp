#include<iostream>
#include<string>

using namespace std;

namespace name1{
    double x=4.56;
    int m=100;

    namespace name2{ //nested name space
        double y=1.23;
    }
}

    namespace name3{ // unname space
        int m=200;
        int n=300;
    }

int main(){
    using namespace name1;

    cout <<" X : "<<x<< endl;
    cout <<" M : "<<m<< endl;
    cout <<" Y : "<<name2::y<< endl;

    using name3::n;
    cout <<" M : "<<name3::m<< endl; // m is qualified
    cout <<" N : "<<n<< endl; // n is not qualified
    return 0;
}
