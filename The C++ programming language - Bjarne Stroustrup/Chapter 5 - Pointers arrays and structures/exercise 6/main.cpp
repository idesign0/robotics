#include<iostream>
using namespace std;

void f(char c){
    cout << "f is called with " <<  c << endl ;
}

void g(char &c){
    cout << "g is called with " <<  c << endl ;
}

void h(const char &c){
    cout << "h is called with " <<  c << endl ;
}

int main(){
    char c ='a';
    unsigned char uc ='b';
    signed char sc = 'c';

    f('a');
    f(49);
    f(3300); // overflow warning but legal
    f(c);
    f(uc);
    f(sc);

    //g('a'); // illegal, cant past constant to non-constant reference
    //g(49);  // illegal, cant past constant to non-constant reference
    //g(3300);// illegal, cant past constant to non-constant reference
    g(c);
    //g(uc); // illegal, type must match reference
    //g(sc); // illegal, type must match reference

    h('a');
    h(49);
    h(3300); // overflow warning but legal
    h(c);
    h(uc);
    h(sc);

    return 0;
}
