#include<iostream>

using namespace std;
class test{
        int val;
public:
    test(){}
    test(int x){
        val = x;
    }
    int show(){
        return val;
    }

    friend test operator+(test &t1,test &t2){
        return (test(t1.val+t2.val));
    }
};

int main(){
    test T1(5);
    test T2(5);
    test T3;

    T3 = T1 + T2;

    cout << T3.show();
}
