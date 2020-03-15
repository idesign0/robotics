#include<iostream>
#include<cmath>
using namespace std;

class class_1{
public:
    int a;
    void putdata(int value){
    this->a=value;
    }
    void getdata(){
    cout<<"Value of data member of class_1 : " << a << endl;
    }

    friend void swapfun(class_1 & ,class_1 &);
};

void swapfun(class_1& a,class_1& b){
    int temp=a.a;
    a.a=b.a;
    b.a=temp;

}

int main(){
    class_1 a;

    cout << "Before swapping : "<< endl;
    a.putdata(50);
    b.putdata(20);

    a.getdata();
    b.getdata();

    swapfun(a,b);


    cout << "After swapping : "<< endl;

    a.getdata();
    b.getdata();
   }
