#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int i):x(i){cout << "\nAlpha constructed"<<endl;}

    void show_alpha(){
        cout << "X : "<< x << endl
    }
};

class beta{
    float p,q;
public:
    beta(float i,float j):p(i),q(j+p){cout << "\nBeta constructed"<<endl;}

    void show_alpha(){
        cout << "X : "<< x << endl
    }
};

int main(){
    return 0;
}
