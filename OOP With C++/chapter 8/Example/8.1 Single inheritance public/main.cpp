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

class D :: public b{
    int c;
public :
    void mul();
    void display();
};

void B::set_ab(){
    a=5;b=10;
}

int B::get_a(){
    return a;
}

int B::show_a(){
    cout << "a = "<<a<<endl;
}

int D::mul(){
    c = b * get_a();
}

void D :: display(){

}

int main(){
    return 0;
}
