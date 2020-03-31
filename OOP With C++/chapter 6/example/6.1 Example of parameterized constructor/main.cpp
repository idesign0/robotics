#include<iostream>
using namespace std;

class test{
    int x;
public:
    test(int y =0){
        x=y;
        cout << x;
    }
    test(){
        x=0;
        cout << x;
    }
};

int main(){
    test t;
    test t1(4);
return 0;
}
