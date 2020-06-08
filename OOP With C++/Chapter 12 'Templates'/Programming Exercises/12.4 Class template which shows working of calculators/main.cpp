#include<iostream>
#include<stdlib.h>
using namespace std;

template<class T>
class calculator{
    T num1;
    T num2;
public:
    calculator(T a, T b){
        num1=a;
        num2=b;
    }

    T add(){ return num1+num2;}
    T subtract(){ return num1-num2;}
    T multiply(){ return num1*num2;}
    T division(){ return num1/num2;}

    void display(){
        cout << "Numbers are : Num1 : " <<num1 <<" Num2 "<< num2 << endl;
        cout << "Additions of numbers : "<< add() << endl;
        cout << "Subtract of numbers : "<< subtract() << endl;
        cout << "Multiply of numbers : "<< multiply() << endl;
        cout << "Division of numbers : "<< division() << endl;
    }
};

int main(){
    calculator<int> a(10,5);
    a.display();
    cout << "\n\n";
    calculator<float> b(2.4,1.2);
    b.display();
    return 0;
}
