#include<iostream>
using namespace std;

template<class T>
class test{
    T number;
public:
    test(){
        T number=0;
    }

    T getnumber(T a){
        number=a;
    }

    void display(){
        cout << "Number : " <<number << endl;
        }
};

int main(){
    test<int> objtest1;
    objtest1.getnumber(7);
    objtest1.display();

    test<float> objtest2;
    objtest2.getnumber(26.25);
    objtest2.display();
}
