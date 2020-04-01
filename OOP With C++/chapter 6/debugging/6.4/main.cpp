#include <iostream>
using namespace std;

class prac{
    int x,y,z;
public :
    prac(int a,int b,int c){
    x=a;
    y=b;
    z=c;
    }
    void show(){
    cout << "\nValues : " <<"\t"<< x <<"\t"<< y <<"\t"<<z;
    }
};

int main(){
    prac obj1(10,20,30);
    prac obj2=obj1;
    prac obj3=obj2;
    obj2.show();

    return 0;
}
