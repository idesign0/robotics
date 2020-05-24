#include<iostream>
#include<cmath>
using namespace std;

class abc;
class xyz{
    int data;
public:
    void setdata(int value){
        data=value;
    }
    friend float adddata(xyz,abc);
    };

class abc{
    int data;
public:
    void setdata(int value){
        data=value;
    }
    friend float adddata(xyz,abc);
    };

float adddata(xyz a,abc b){
    return a.data + b.data;
}

int main(){
    xyz a;
    abc b;

    a.setdata(5);
    b.setdata(50);

    cout << "Sum of two objects are : " << adddata(a,b);
}
