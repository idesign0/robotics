#include <iostream>

using namespace std;

void fun(int c){

    if(c==0){
        cout << c ;
    }else{
        cout << c << endl ;
        fun(--c);
        return;
    }
}

int main(){

        int c =10;
        fun(10);
    }
