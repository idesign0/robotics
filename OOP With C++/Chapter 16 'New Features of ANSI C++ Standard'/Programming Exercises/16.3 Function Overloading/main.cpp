#include<iostream>
using namespace std;

int area(int a){
    return a*a;
}

int area(int w,int b){
    return b*w;
}

int main(){
    cout << area(5) << endl;
    cout << area(5,10) << endl;
    return 0;
}
