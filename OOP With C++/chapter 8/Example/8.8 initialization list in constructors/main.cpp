#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int i):x(i){cout << "\nAlpha constructed"<<endl;}

    void show_alpha(){
        cout << "X : "<< x << endl;
    }
};

class beta{
    float p,q;
public:
    beta(float i,float j):p(i),q(j+p){cout << "\nBeta constructed"<<endl;}

    void show_beta(){
        cout << "P : "<< p << endl
             << "Q : "<< q << endl;
    }
};

class gamma:public beta,public alpha{
    int u,v;
public:
    gamma(int a,int b,float c):alpha(a*2),beta(c,c),u(a){v=b;cout << "\nBeta constructed"<<endl;}

    void show_gamma(){
        cout << "U : "<< u << endl
             << "V : "<< v << endl;
    }
};

int main(){
    gamma g(5,10,5.5);
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
}
