#include <iostream>

using namespace std;

class complexx{

public:
    float x,y;
    complexx(){}
    complexx(float a):x(a),y(a){}
    complexx(float real1, float imag)
    {
        x=real1;y=imag;
    }

    friend complexx sum(complexx,complexx);
    friend void shoe(complexx);
};

complexx sum(complexx c1,complexx c2){
    complexx c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(complexx c){
        cout << c.x << " + j"<<c.y <<"\n";
}

int main()
{
    complexx A(2.7,5.85);
    complexx B(1.6);
    complexx C;

    C=sum(A,B);

    cout << "A = ";show(A);
    cout << "B = ";show(B);
    cout << "C = ";show(C);

    return 0;
}
