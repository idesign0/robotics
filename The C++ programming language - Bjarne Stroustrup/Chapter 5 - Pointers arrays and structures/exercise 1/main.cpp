#include<iostream>

using namespace std;

int main(){
    char *p = "a";
    int arr_int[10] = {0,1,2,3,4,5,6,7,8,9};
    int (&ref_arr)[10] = arr_int;

    char* (*ptr_arrchar);

    char c = 'd';
    char *pc = &c;
    char **ppc = &pc;

    const int a=10;
    int b=10;
    const int * const pb=&b;

    return 0;
}
