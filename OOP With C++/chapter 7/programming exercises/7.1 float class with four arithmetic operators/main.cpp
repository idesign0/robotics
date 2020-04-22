#include<iostream>
using namespace std;

class Float{
    float var_float;
public:
    Float(){}
    Float(float var){var_float=var;}
    Float operator+(Float A);
    Float operator-(Float A);
    Float operator*(Float A);
    Float operator/(Float A);

    void show(){
    cout << var_float;
    }
};

Float Float::operator+(Float A){
    return (Float(A.var_float+var_float));
}

Float Float::operator-(Float A){
    return (Float(var_float-A.var_float));
}

Float Float::operator*(Float A){
    return (Float(var_float*A.var_float));
}

Float Float::operator/(Float A){
    return (Float(var_float/A.var_float));
}

int main(){
    Float a,b,c;
    a=10;
    b=2;

    cout << "Sum of two objects : ";
    c = a + b ; c.show();

    cout << "\n\nSubtraction of two objects : ";
    c = a - b ; c.show();

    cout << "\n\nMultiplication of two objects : ";
    c = a * b ; c.show();

    cout << "\n\nDivision of two objects : ";
    c = a / b ; c.show();


    return 0;
}
