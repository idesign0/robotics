#include<iostream>

using namespace std;

int main(){

    struct mystruct_t{char *m;};
    mystruct_t *p = new mystruct_t;
    mystruct_t p1;
    int* a[4];
    int i=0;

    (*(p++));
    cout << p << endl;
    (*(--p));
//  (++(a--)); // lvalue require for prefix operator
    ((int*)(p->m));
    (*(p1.m));
    (*(a[i]));
}
