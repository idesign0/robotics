#include<iostream>
using namespace std;

class Float{
    float var_float;
public:
    Float(float var){var_float=var;}
    Float operator+(Float A);
    Float operator-(Float A);
    Float operator*(Float A);
    Float operator/(Float A);
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
    return 0;
}
