#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int i){
        x=i;
        cout << "\nAlpha constructed"<<endl;
    }
    void show_alpha(){
        cout << " X = "<< x << "\n";
    }
};

class beta{
    float p,q;
public:
    beta(float a,float b):p(a),q(b+p){
        cout << "\nBeta constructed"<<endl;
    }
    void show_beta(){
        cout << " P = "<< p << "\n"
             << " Q = "<< q << "\n";
    }
};

class gamma:public beta,public alpha{
    int u,v;
public:
    gamma(int a,int b,float c):alpha(a*2),beta(c,c),u(a){v=b;cout << "\nBeta constructed"<<endl;}

    void show_gamma(){
    cout << " U = "<< u << "\n"
         << " V = "<< v << "\n";
    }
};

int main(){
    gamma g(2,4,2.5);

    cout << "\n\nDisplay member values " << "\n\n";
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
}
