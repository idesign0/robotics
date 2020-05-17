#include<iostream>
using namespace std;

class original_base{
public:
    virtual void print(){
        cout << "Print version of base class\n";
    }
    void show(){
        cout << "Show version of base class\n";
    }
};

class derived_class:public original_base{
public:
    void print(){
        cout << "Print version of derived class\n";
    }
    void show(){
        cout << "Show version of derived class \n";
    }
};

int main(){
    original_base *ptr;
    derived_class x;
    ptr=&x;
    ptr->print();
    ptr->show();
    return 0;
}
