#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int i){
        x=i;
        cout << "Alpha initialized \n"<<endl;
    }

    void show_x(){
        cout << "X = "<<x <<endl;
    }
};

class beta{
    float y;
public:
    beta(float j){
        y=j;
        cout << "beta initialized \n"<<endl;
    }

    void show_y(){
        cout << "Y = "<<y <<endl;
    }
};

class gamma:public beta,public alpha{
    int m,n;
public:
    gamma(int a,float b,int c,int d):alpha(a),beta(b){
        m=c;
        n=d;
        cout << "Gamma initialized \n"<<endl;
    }

    void show_z(){
        cout << "M = "<<m <<endl
             << "N = "<<n <<endl;
    }
};

int main(){
    gamma g(5,10.15,15,20);
    g.show_x();
    g.show_y();
    g.show_z();
    return 0;
}
