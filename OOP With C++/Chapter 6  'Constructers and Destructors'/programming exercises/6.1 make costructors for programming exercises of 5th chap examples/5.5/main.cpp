#include<iostream>
using namespace std;
class test{
    int code;
    static int countt;
public:
    test(){
        code = ++countt;
    }
    void showcode(){
        cout << "Object Number : " << code << "\n";
    }

    static void showcount(){
        cout << "Count : " << countt << "\n";
    }
};
int test::countt;
int main(){
    test t1,t2;

    test::showcount();

    test t3;

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
