#include<iostream>
#include<cstdio>
using namespace std;

/*
before  c++11

Order of evaluation of any part of expression, including order of evaluation of function arguments is unspecified(with some exception
list below). the compiler can evaluate operands and any subexpressions in any order and may choose another order when same expression is
evaluated again.

there is no concept of left-to-right or right-to-left evaluation in c++. this is not to be confused with left to right and right to left
associativity of operators: the expression a() + b() + c() is parced as (a()+b())+c() due to left to right associativity of operator +,
but function call c() may be evaluated first, last or between a() and b() at runtime.
*/

/*after c++11*/
/*
order of evaluation follows right-to-left evaluation in function arguments and in + operators evaluation order is from left to right.
so order of evaluation follows left-to-right evaluation or right to left according to the associativity of operators.
*/

int a(){return puts("a");}
int b(){return puts("b");}
int c(){return puts("c");}
int z(int,int,int){}

int f1(int &i){
    return i++;
}

int f2(int &i){
    return i=0;
}

void f3(int a,int b){}

int main(){
    z(a(),c(),b());
    a()+c()+b();

    int i=1;

    f3(f1(i),f2(i));
    cout << i << endl; // 1

    ++i = i++ ; // temp will save old value of i in right hand side. (int t=i,i++,t); order of () is left to right
                // temp assigned to left hand and then new value of i(1) is incremented.
    cout << i  << endl; // 2

    int a[4] = {1, 2, 3, 4};
    int x=0;
    a[x++]=++x;
    cout << a[x] << endl ; // 3

    x=0;
    x = ++x + 1;
    cout << x << endl; // 2

    int a1[4]={1,1,1,1}; int *p = a1;
    *p++ = *p++ = 0;
    cout << a1[1] << endl; // a[0]=0, a[1]=0, a[2]=1, a[3]=1
}
