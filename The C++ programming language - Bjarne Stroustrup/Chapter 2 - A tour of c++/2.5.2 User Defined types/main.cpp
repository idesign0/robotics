#include <iostream>

using namespace std;

class complexx{
    double re;
    double im;
public:
    complexx(double r, double i){
        re=r;
        im=i;
    }
    complexx(double r){
        re=r;
        im=0;
    }
    complexx(){
        re=im=0;
    }

    friend complexx operator+(complexx,complexx);
    friend complexx operator-(complexx,complexx);   // binary
    void operator-();            // unary
    friend complexx operator*(complexx,complexx);
    friend complexx operator/(complexx,complexx);
    friend complexx operator/(int,complexx);

    void display(){
        cout << re <<" + "<<im<<"j "<<endl;
    }

    friend bool operator==(complexx,complexx); // equal
    friend bool operator!=(complexx,complexx); // not equal
};

    complexx operator+(complexx a,complexx b){
        return complexx(a.re+b.re,a.im+b.im);
    }

    complexx operator-(complexx a,complexx b){
        return complexx(a.re-b.re,a.im-b.im);
    }

    void complexx::operator-(){
        re = -(this->re);
        im = -(this->im);
      }

    complexx operator*(complexx a,complexx b){

        complexx temp;
        temp.re = (a.re*b.re) + ((a.im*b.im)*(-1));
        temp.im = (a.re*b.im) + (b.re*a.im);
        return temp;
    }

    complexx operator/(complexx a,complexx b){
        complexx temp;
        complexx top;
        complexx bottum;

        bottum.re = (b.re*b.re) + (b.im*b.im);

        top.re = (a.re*b.re) - (a.im*b.im*(-1.0));
        top.im = -1.0*(a.re*b.im) + (b.re*a.im);

        temp.re = top.re/bottum.re;
        temp.im = top.im/bottum.re;

        return temp;
    }

    complexx operator/(int a,complexx b){
        complexx temp;
        complexx top;
        complexx bottum;

        bottum.re = (b.re*b.re) + (b.im*b.im);

        top.re =  b.re;
        top.im =  -b.im;

        temp.re = top.re/bottum.re;
        temp.im = top.im/bottum.re;

        return temp;
    }

int main()
{
    // initialization

    cout << "Initialization : " << endl;
    complexx a(2,-3);
    complexx b(1);
    complexx c;
    complexx d(1,5);

    a.display();
    b.display();
    c.display();

    // addition
    cout << "Addition : " << endl;
    complexx add;
    add = a + b;
    add.display();

    // unary minus unary
    cout << "Negative : " << endl;
    -a;
    a.display();

    // binary minus
    cout << "Subtraction: " << endl;
    complexx bin_min;
    bin_min = a - b;
    bin_min.display();

    // multiply
    cout << "Multiply : " << endl;
    complexx mul;
    mul = a * d;
    mul.display();

    // Division unary
    cout << "Division : " << endl;
    complexx div;
    div = 1 / d ;
    div.display();

    // Division binary
    cout << "Division binary : " << endl;
    complexx div_bin;
    div_bin = a / d ;
    div_bin.display();


    return 0;
}
