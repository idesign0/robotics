#include<iostream>
using namespace std;

class test{
public:
    int num;
    test(int j){
        num=j;
    }
    test* operator->(){
        return this;
    }
};
int main(){
    test T(5);
    test *ptr =&T;

    cout << "\nT.num : " << T.num ;
    cout << "\nPtr->num : " << ptr->num ;
    cout << "\nT->num : " << (T.operator->())->num;

}
