#include<iostream>

using namespace std;

class M{
    int x,y;
public:
    void set_xy(int a,int b){
        x=a;
        y=b;
    }
    friend int sum(M);
};
int sum(M m){

    int M :: *px = &M::x;
    int M :: *py = &M::y;

    M *pm = &m;

    int s = m.*px + pm->*py;

    return s ;
}

int main(){
    M n;

    void(M::*pf)(int,int) = &M::set_xy;
    (n.*pf)(20,14);

    cout << "SUM : " << sum(n) << endl ;

    M *pn = &n;

    (pn->*pf)(25,1);
    cout << "SUM : " << sum(n) << endl ;

    return 0;
    }
