#include<iostream>
using namespace std;

class b{
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


int main(){
    return 0;
}
