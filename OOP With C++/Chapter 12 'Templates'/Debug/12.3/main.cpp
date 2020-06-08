#include<iostream>
using namespace std;

template <class t1,class t2>
t2 & minmaxx(t1 x,t2 y){
    return x>y ? x : y;
    cout << " ";
}

int main(){
    cout << minmaxx(2.2,-3.2);
    return 0;
}
