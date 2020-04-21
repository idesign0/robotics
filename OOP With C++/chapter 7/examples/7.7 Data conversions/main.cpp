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
    int get_code{return code;}
    float get_price{return price;}
    int get_items{return items;}

    operator float(){
        return (price*items);
    }
};

class invent_2{
    int code;
    float total_price;
public:


};
int main(){

    return 0;
}
