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

/*    cout << endl << "a.*px : " << m.*px ;
    cout << endl << "a.x : " << m.x;
    cout << endl << "pa->*py : " << pm->*py ;
    cout << endl << "pa->y : " << pm->y << endl ;
*/0
    return s ;
}

int main(){
    M n;
    n.set_xy(5,10);

    cout << "Sum : " << sum(n) ;
}
