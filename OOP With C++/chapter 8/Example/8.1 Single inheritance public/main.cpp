#include<iostream>
using namespace std;

class B{
    int a;
public:
    int b;// public; ready for inheritance
    void set_ab();
    int get_a();
    void show_a();
};

class D : public B{
    int c;
public :
    void mul();
    void display();
};

// for class B

void B::set_ab(){
    a=5;b=10;
}

int B::get_a(){
    return a;
}

void B::show_a(){
    cout << "a = "<<a<<endl;
}

// for class D

void D::mul(){
    c = b * get_a();
}

void D :: display(){
    cout << "a = "<< get_a()<< "\n";
    cout << "b = "<< b<< "\n";
    cout << "c = "<< c<< "\n";
}

int main(){
    D d;
    d.set_ab();
    d.mul();
    d.display();

    d.b=20;
    d.mul();
    d.display();
    return 0;
}
