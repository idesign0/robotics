#include<iostream>

using namespace std;

int main(){
    const char *p = "H";

    int a = 10;
    int * const p_const = &a;
    const int * p_con2 = &a;

    char string_array[50] = {"Hii my name is Dhruv"};
    char *p_string = string_array;

    int array_int[10]={0,1,2,3,4,5,6,7,8,9};
    int (&ref_array)[10]=array_int;

    char pe = 'a';
    char *pc = &pe;
    char ** pp = &pc;

    const int  b = 10;
    const int *const  pb = &b;

    return 0;
}
