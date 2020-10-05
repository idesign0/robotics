#include<iostream>

using namespace std;

void swapp(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapp(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}

void print(int x, int y){
    cout << x << " " << y << endl;
}

int main(){
    int a,b;
    a=1;
    b=2;
    cout << "a : " << a << " " << "b : " << b << endl;
    cout << "Sending argument as a pointers : " << endl;
    swapp(&a,&b);
    print(a,b);
    cout << "Sending argument as a Reference : " << endl;
    swapp(a,b);
    print(a,b);

    return 0;
}
