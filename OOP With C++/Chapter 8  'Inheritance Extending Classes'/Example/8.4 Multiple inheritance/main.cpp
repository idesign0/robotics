#include<iostream>
using namespace std;

class M{
protected:
    int m;
public:
    void get_m(int n){m=n;}
};

class N{
protected:
    int n;
public:
    void get_n(int m){n=m;}
};

class P : public M,public N
{
public :
    void display(){
        cout << "M : "<<m<<endl;
        cout << "N : "<<n<<endl;
        cout << "P : "<<m*n<<endl;
    }
};

int main(){
    P op;
    op.get_m(10);
    op.get_n(20);
    op.display();

}
