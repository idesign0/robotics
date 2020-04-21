#include<iostream>
using namespace std;

class invent_2;

class invent_1{

    int code;
    float price;
    int items;

public:

    invent_1(int c,float p,int i){
        code = c; items =i; price=p;
    }
    void putdata(){
        cout << "Code : " << code << "\n";
        cout << "Items : " << items << "\n";
        cout << "Price : " << price << "\n\n";
    }

     ;
};
int main(){

    return 0;
}
