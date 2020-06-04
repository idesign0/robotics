#include<iostream>
#include<string>
using namespace std;

template<class T>
void display(T x){
    cout << "Overloaded template display 1 : "<<x<<"\n";
}

template<class T,class U>
void display(T x,U y){
    cout << "Overloaded template display 2 : "<<x<<" , "<<y<<"\n";
}

void display(int x){
    cout << "Explicit display : "<<x<<"\n";
}

int main(){
    display(100);
    display(12.15);
    display(100,12.15);
    display('c');
}
