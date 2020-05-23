#include<iostream>
using namespace std;

int main(){
    cout.width(5);
    cout<< "99" <<endl;

    cout.setf(ios::left,ios::adjustfield);
    cout.width(5);
    cout<< "99" <<endl;

    cout.setf(ios::right,ios::adjustfield);
    cout.width(5);
    cout<< "99" <<endl;

    return 0;
}
