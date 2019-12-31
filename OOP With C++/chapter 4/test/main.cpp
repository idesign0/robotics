#include <iostream>

using namespace std;
int & maxx(int&,int&);
int main()
{
    int a=15,b=10;
    int &m = a;
    int &n = b;

    maxx(m,n) = 25;

    cout << a << " " << b;

    return 0;0
}
int & maxx(int &a,int &b){
    if(a>b){
        return a;
    }else{
    }
        return b;
    }
