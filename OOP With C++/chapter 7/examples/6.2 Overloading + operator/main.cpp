#include<iostream>
using namespace std;

class complexx{
    float x;
    float y;
public:
    complexx(){}
    complexx(float real,float img){
        x=real;
        y=img;
    }
    complexx operator+(complexx);
    void display();
};

complexx complexx::operator+(complexx c){
    return complexx(x+c.x,y+c.y);
}

void complexx::display(){
    cout << x <<" + j"<<y<<endl;
}

int main(){
    complexx c1,c2,c3;
    c1=complexx(2.5,3.5);
    c2=complexx(1.6,2.7);

   //c3 = c1.operator+(c2);
   c3 = c1 + c2;


    cout << "C1 = ";c1.display();
    cout << "C2 = ";c2.display();
    cout << "C3 = ";c3.display();

    return 0;
}
