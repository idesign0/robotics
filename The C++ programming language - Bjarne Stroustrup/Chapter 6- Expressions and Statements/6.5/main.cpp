#include<iostream>
#include<limits>
using namespace std;

int main(){

/////////////////////// implementation defined behavior

    // differ from system to system
    cout << (sizeof(long long) > sizeof(long)) << endl;
    cout << sizeof(wchar_t)<<endl;
    int s$;
    cout << s$ << endl;
    cout << numeric_limits<int>::max()+1 << endl;

    int arrr[10];
    for(int i=0;i<10;i++){
        cout << arrr[i] << endl; // random values
    }

    // bool uninitialized
    bool d;
    (d==true) ? cout << "True" << endl : cout << "False" << endl; // random value

///////////////////////undefined behavior

    // dereferencing null pointer
    char *p = 0;
    cout << *p << endl; //runtime error

    // dividend 0
    int a = 1;int b=0;
    int c = a/b;
    cout << c << endl; //  runtime error

    // string literal
    char *str = "hello world";
    str[0]='b';
    str[4]='p';
    cout << str << endl; // runtime error

    // undefined typecasting
    long x = -1;
    char y = char(x);
    cout << y << endl; //undefined

}
