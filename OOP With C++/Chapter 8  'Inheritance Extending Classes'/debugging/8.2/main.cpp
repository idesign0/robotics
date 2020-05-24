#include<iostream>
using namespace std;

class four_seater{
public:
    void property(){
        cout << "It has space for four persons" << endl;
    }
};

class four_wheeler{
public:
    void property(){
        cout << "It runs on four types" << endl;
    }
};

class car:public four_seater,public four_wheeler{
public:
    void display(){
        four_seater::property();
        four_wheeler::property();
    }

};

int main(){
    car c1;
    c1.display();
    return 0;
}
