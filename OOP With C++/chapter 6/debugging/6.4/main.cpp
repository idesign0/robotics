#include<iostream>
using namespace std;

class dynamic{
    int *p;
public:
    dynamic(){
    p = new int(10);
    }
    dynamic(int v){
    p = new int(v);
    }
    int display(){
    return *p;
    }
};
int main(){
    dynamic p1,p2(9);
    cout << "Object p1 is : ";
    cout <<p1.display();
    cout << "\nObject p2 is : " << p2.display();
}
