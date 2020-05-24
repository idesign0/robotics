#include<iostream>
using namespace std;

// class student number

class student_number{
    int roll_number;
public:
    void get_number(int number){ roll_number = number;}
    void put_number(){cout << "Student Number : "<< roll_number << endl;}
};

// class test

class student_test:public student_number{
protected:
    float sub1;
    float sub2;
public :
    void get_marks(float a,float b){
    sub1=a;
    sub2=b;
    }
    void put_marks(){
        cout << "Marks in SUB1 : " << sub1 <<endl
             << "Marks in SUB2 : " << sub2 << endl;
    }
};

// student total

class total:public student_test{
    float total;
public:
    void display();
};

void total::display(){
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total : "<<total <<"\n";
}

int main(){
    total t;
    t.get_number(111);
    t.get_marks(11.0,50.51);
    t.display();
    return 0;
}
