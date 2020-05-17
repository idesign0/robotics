#include<iostream>
using namespace std;

class p{
public:
    virtual void print(){
        cout << "It is base class\n";
    }
};

class q:public p{
public:
    void print(){
        cout << "It is derived class\n";
    }
};

int main(){
    p *b = new q;
    b->print();
    p a;
    b=&a;
    b->print();
    return 0;
}
