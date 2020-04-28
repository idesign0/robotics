#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int i){
        x=i;
        cout << "Alpha initialized \n"<<endl;
    }

    void show(){
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

    void show(){
        cout << "Y = "<<y <<endl;
    }
};

class gamma:public alpha,public beta{
    int m,n;
public:
    alpha(int a,float b,int c,int d):alpha(a),beta(b){
        m=c;
        n=d;
        cout << "Gamma initialized \n"<<endl;
    }

    void show(){
        cout << "M = "<<m <<endl
        cout << "N = "<<n <<endl;
    }
};

int main(){

    return 0;
}
