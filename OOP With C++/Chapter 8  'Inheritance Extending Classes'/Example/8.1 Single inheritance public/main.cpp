#include<iostream>
using namespace std;

class A{
    int a;
public:
    int b;
    A(){
        a=10;b=10;
    }
    int get_x(){return a;}
    void show_x(){cout << "A : "<<a << endl;}
};

class B : public A{
    int c;
public:
    void mul(){ c = b*get_x();}
    void show(){cout << "B : " << b << endl;
                cout << "C : " << c << "\n\n";}
};

int main(){
    B d;

    d.show_x();
    d.mul();
    d.show();

    d.show_x();
    d.b=20;
    d.mul();
    d.show();

    return 0;
}
