#include<iostream>
#include<limits>
using namespace std;

int main(){

    /*correctness of conversions are completely in hands of programmer*/


    /*
        T(e) might be doing portable conversions between related types , a non portable conversions between unrelated types.
        without knowing the exact type of T and e, you can not tell.
    */

    // 1
    int a[4]={1,2,3,4};
    char * p = (char *)a;
    cout << (int)(*(p+4)) << endl; // ans was 2

    // 2
    struct mystruct_t{
        char x;
        int y;
    }mystruct={'a',2};

    char *pp =(char *)&mystruct;
    cout << (int)(*(pp+4)) << endl;

    /*

    some static_cast are portable but few reinterpret_cast are.

    hardly any guarantee made for reinterpret_cast,but generally it produces value of a new type that has the same bit patterns as its argument.

    the result of reinterpret_cast is guaranteed to be usable only if the result type is the exact type used to define the value involved.

    */

    // 3
    char charr[4] = {2,0,0,0};
    int* i= reinterpret_cast<int*>(charr);
    cout << *i << endl;

    // 4
    // prefer plain char over signed character and unsigned character for characters range over 0 to 127...(most of keyboard character)
    // however values outside that range(127) stored in plain characters can lead ti subtle portability problems

    signed char ch = 130;
    cout << ch << endl; // e

}
