#include<iostream>
using namespace std;

class A{
    int a;
public:
    int b;

    void set_x{a=10;}
    void get_x{return a;}
    void show{cout << "X : "<<x << endl;}
};

class B : public A{
    int c;
};
int main(){

    return 0;
}
