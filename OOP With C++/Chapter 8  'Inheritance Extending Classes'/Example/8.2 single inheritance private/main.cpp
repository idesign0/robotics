#include<iostream>
using namespace std;

class A{
    int a;
public:
    int b;
    A(){
        cout << "Enter the value of a and b : ";
        cin>>a>>b;
    }
    int get_x(){return a;}
    void show_x(){cout << "A : "<<a << endl;}
};

class B : public A{
    int c;

public:
    void mul(){
        c = b*get_x();}
    void show(){
        show_x();
        cout << "B : " << b << endl;
        cout << "C : " << c << "\n\n";}
};

int main(){
    B d;
    d.mul();
    d.show();

    return 0;
}
