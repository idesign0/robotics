#include<iostream>
using namespace std;



class A{
protected:
    int a,b;
public:
    void value_a_b(){a=2;b=2;};
};

class B:public A{
protected:
    int c;
public:
    void value_c(){c=2;}
};

class C{
protected:
    int d;
public:
    void value_d(){d=3;}
};

class D:public B,public C{
protected:
    int e;
public:
    void result(){
        value_a_b();
        value_c();
        value_d();
        e=a*b*c*d;
        cout << "\n Multiplication is : " << e ;
    }
};

int main(){
    D d1;
    d1.result();
    return 0;
}
