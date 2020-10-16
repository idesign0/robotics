#include<iostream>

using namespace std;

void f(int a , int b){
    if(a=3){ cout << "test1 : true "<< endl;} // always gives true

    if(a&077==0) { cout << "test2 : true "<< endl;} // 077==0 is false(0) no matter what a is , a & 0 is 0;

//    a := b+1; compiler error
}

int main(){
    f(1,2);
}
