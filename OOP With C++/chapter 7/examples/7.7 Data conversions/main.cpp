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
    int get_code(){return code;}
    float get_price(){return price;}
    int get_items(){return items;}

    operator float(){
        return (price*items);
    }
};

class invent_2{
    int code;
    float total_price;
public:
    invent_2(){code=0;total_price=0;}
    invent_2(int c,int t){
        code = c; int total_price = t;
    }
    void putdata(){
        cout << "Code : " << code << "\n";
        cout << "Price : " << total_price << "\n\n";
    }
    invent_2(invent_1 v){
        code = v.get_code();
        total_price = v.get_items() * v.get_price();
    }

};
int main(){
    invent_1 s1(5,500.50,15);
    invent_2 d1;

    float total_price;
    total_price = s1;

    cout << "Details of inventory 1 : " << "\n";
    s1.putdata();
    cout << "Total price : " << total_price << "\n\n";

    d1=s1;

    cout << "Details of inventory 2 : " << "\n";
    d1.putdata();


    return 0;
}
