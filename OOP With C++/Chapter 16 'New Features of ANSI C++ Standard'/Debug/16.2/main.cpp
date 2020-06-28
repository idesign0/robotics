#include<iostream>
using namespace std;
class A{
protected :
    int i;

public:
    A(){
        i=10;
    }

    int geti(){
        return i;
    }
};

class B:public A{
public:
    B(){

    }
    int geti(){
        return 2*i;
    }
};

int main(){

    A *ptra = new A();
    B *ptrb = static_cast<B*>(ptra);
    cout << ptrb->geti();
}
