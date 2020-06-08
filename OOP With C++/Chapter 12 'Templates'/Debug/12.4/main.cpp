#include<iostream>
using namespace std;

template <class T>
T & minmaxx(T x,T y){
    return x>y ? x : y;
    cout << " ";
}

int main(){
    cout << minmaxx(int('m'),100);
    return 0;
}
