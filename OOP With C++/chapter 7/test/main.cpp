#include<iostream>

using namespace std;
class test{
public:
    int operator++(int a){
        a +=5;
        return a;
        }

int main(){
    test A;
    int a = 0;
    int c=A.operator++(a);
    cout << c;
}
