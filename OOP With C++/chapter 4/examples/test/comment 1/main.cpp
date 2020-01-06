// if variable m is declared in stack or in function then function f cant return any value cout will be 0

// if var m is defined globally then function can return memory address , cout will be address
#include <iostream>
using namespace std;

int m;

int * f(int);

int main()
{
    int * p = f(10);
    cout << p;
}

int * f(int a){
     m = a;
    return &m;
}
