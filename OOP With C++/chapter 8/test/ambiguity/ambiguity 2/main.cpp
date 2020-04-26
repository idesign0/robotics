#include<iostream>
using namespace std;

class M{
public:
    void display(){cout << "Class M "<< endl;}
};

class P:public M{
public:
    void display(){cout << "Class P "<< endl;}
};

int main(){
    P p;
    p.P::display();
    p.M::display();
    return 0;
}
