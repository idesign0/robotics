#include<iostream>

class a{
public:
    a(){

    }
    a(int i){

    }
};

class b{
public:
    b(){

    }
    explicit b(int){

    }
};

int main(){
    a a1=12;
    a a2;
    a a3=a1;

    b b1(12);
}
