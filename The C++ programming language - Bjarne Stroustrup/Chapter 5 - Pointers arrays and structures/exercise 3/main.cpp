#include<iostream>

using namespace std;

int main(){
    typedef unsigned char uchar_t;
    typedef const unsigned char const_uchar_t;
    typedef int* ptr_int_t;
    typedef char** ptr2_char_t;

    typedef char char_array[3];
    typedef char_array *ptr_char_array_t;
    /*other option*/
    typedef char (*ptr_array_t)[];

    typedef int* ptr_int[7];

    typedef int* (*ptr_int_array)[7];

    typedef int* a8a7ptr[7][8];

    char ch[3] = "da";
    ptr_char_array_t ptr = &ch;

    cout << *ptr;
    return 0;
}
