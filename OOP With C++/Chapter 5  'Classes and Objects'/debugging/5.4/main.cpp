#include<iostream>

using namespace std;

class age{
    int father_age;
public:
    friend int getage(age a){
        a.father_age = 15;
        return a.father_age;
    }
    };

int main(){
    age a;
    cout << "father's age : " << getage(a) ;
}
