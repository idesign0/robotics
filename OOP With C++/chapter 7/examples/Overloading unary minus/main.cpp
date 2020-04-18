#include<iostream>
using namespace std;

class space{
    int x;
    int y;
    int z;
public:
    space(){
    }
    space(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }

    void display(){
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }


    friend void operator-(space &s){
        s.x = -s.x;
        s.y = -s.y;
        s.z = -s.z;
    }
};
int main(){
    space s(1,2,3);
    cout << "S : \n"; s.display();

    -s;
    cout << "-S : \n"; s.display();

    return 0;
}
