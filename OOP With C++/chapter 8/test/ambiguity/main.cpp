#include<iostream>
using namespace std;

class M{
public:
    void display(){cout << "Class M "<< endl;}
};

class N{
public:
    void display(){cout << "Class N "<< endl;}
};

class P:public M, public N{
public:
    void display(){N ::display();}
};
int main(){
    P p;
    p.display();
    return 0;
}
