#include<iostream>
using namespace std;

class p{
protected:
    int i;
};

class q:virtual public p{
protected:
    int j;
};

class r:virtual public p{
protected:
    int k;
};

class s:public q,public r{
private:
    int mul;
public:
    int multi_fun(){
        i=10;j=20;k=30;
        mul = i*j*k;
        return mul;
    }
};

int main(){
    s ob1;
    cout << "Multiplication is : " << ob1.multi_fun() << endl;
    return 0;
}
