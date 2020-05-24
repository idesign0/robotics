#include<iostream>
using namespace std;

class base{
public:
    void display(){cout << "\nDisplay base ";}
    virtual void show(){cout << "\nShow base ";}
};

class derived:public base{
public:
    void display(){cout << "\nDisplay Derived ";}
    void show(){cout << "\nShow Derived ";}
};

int main(){
    base b;
    derived d;
    base *pbase;

    cout << "\nbptr points to base \n";
    pbase=&b;
    pbase->display();
    pbase->show();

    cout << "\nbptr points to derived \n";
    pbase=&d;
    pbase->display();
    pbase->show();
    return 0;
}
