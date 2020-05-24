#include<iostream>
using namespace std;

class bc{
public:
    int b;
    void show(){
    cout << "b = "<<b<<endl;
    }
};
class dc:public bc{
public:
    int d;
    void show(){
    cout << "b = "<<b<<endl;
    cout << "d = "<<d<<endl;
    }
};

int main(){
    bc *bptr;
    bc base;
    bptr=&base;

    bptr->b=100;
    cout << "bptr points to base objects \n";
    bptr->show();

    //derived class

    dc derived;
    bptr=&derived;
    bptr->b=200;

    cout << "bptr now points to derived objects \n";
    bptr->show();

    dc *dptr;
    dptr=&derived ;

    dptr->d=300;
    cout << "dptr is derived type pointer \n";
    dptr->show();

    cout << "Using (dc*)bptr : \n";
    ((dc*)bptr) -> d = 400;
    ((dc*)bptr) ->show() ;
    return 0;

}
