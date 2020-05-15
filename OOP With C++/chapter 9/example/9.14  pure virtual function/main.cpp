#include<iostream>
using namespace std;

class balagurusamy{
public:
    virtual void example()=0;
};

class c:public balagurusamy{
public:
    void example(){
        cout << "C text book written by balagurusamy ";
    }
};

class oop:public balagurusamy{
public:
    void example(){
        cout << "\nC++ text book written by balagurusamy ";
    }
};

int main(){
    balagurusamy *arr[2];

    c e1;
    oop e2;

    arr[0]=&e1;
    arr[1]=&e2;

    arr[0]->example();
    arr[1]->example();

    return 0;
}
