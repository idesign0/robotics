#include<iostream>
using namespace std;

class complexx{
    float real;
    float image;

public:
    complexx(){}
    complexx(float r,float i){
        real=r;
        image=i;
    }
    complexx(complexx &c){
        real = c.real;
        image = c.image;
    }

    void show(){
    cout << real <<" + "<<image<<"j"<<endl;
    }
complexx operator-();
complexx operator+(complexx &b);
complexx operator-(complexx &b);
complexx operator*(complexx &b);
};

complexx complexx::operator-(){
    real = -real;
    image = -image;
}

complexx complexx::operator+(complexx &b){
    complexx temp;
    temp.real = real + b.real;
    temp.image = image + b.image;
    return temp;
}

complexx complexx::operator-(complexx &b){
    complexx temp;
    temp.real = real - b.real;
    temp.image = image - b.image;
    return temp;
}

complexx complexx::operator*(complexx &b){
    complexx temp;
    temp.real = real*b.real - image*b.image;
    temp.image = image*b.real + real*b.image;
    return temp;
}

int main(){
    complexx x(1,1);
    complexx y(1,1);
    complexx z;

    z = x+y;
    z.show();

    z = x-y;
    z.show();

    z = x*y;
    z.show();

    -z;
    z.show();
    return 0;
}
