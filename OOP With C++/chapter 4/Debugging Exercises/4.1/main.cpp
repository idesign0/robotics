#include <iostream>

using namespace std;

int add(int p,int q){

    int r;
    r=p+q;
    return r;
}

int main(){

    int x=7,y=5,z;
    z= add(7,2);
    cout << "Result 1:- " << z << endl;
    cout << "Result 2:- " << z + add(7,8) << endl;
    cout << "Result 3:- " << add(x,y) << endl;

    z= 4 + add(9,y);

    cout << "Result 4:- " << z << endl;

    return 0;
}
