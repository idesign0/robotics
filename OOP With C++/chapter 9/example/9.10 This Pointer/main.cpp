#include<iostream>
#include<cstring>
using namespace std;

class person{
    char name[30];
    float age;
public:
    person(char * s, float a){
        strcpy(name,s);
        age=a;
    }
    person greaterr(person & x){
        if(age>=x.age){
            return *this;
        }else
            return x;
    }
    void display(){
        cout << "Name : "<<name<<endl
             << "Age : "<<age<<endl;
    }
};

int main(){
    person  P1("John",52.21),
            P2("Ahmed",12.52),
            P3("Hebber",40.25);

            person P = P1.greaterr(P2);
            cout << "Elder person : ";P.display();
    return 0;
}
