#include<iostream>
using namespace std;

typedef void (*functionp)(int,int);

void add(int a,int b){
    cout << "a" << " + "<<"b : "<<a+b<<endl;
}

void sub(int a,int b){
    cout << "a" << " - "<<"b : "<<a-b<<endl;
}

int main(){
    functionp pfun;
    pfun=&add;
    pfun(10,8);
    pfun=&sub;
    pfun(10,8);
    return 0;
}
