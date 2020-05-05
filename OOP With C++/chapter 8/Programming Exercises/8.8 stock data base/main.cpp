#include<iostream>
using namespace std;

class menu{
    int code;
    enum product_type{electronic,food,milk,cloths};
public:
    void get_code(){
    cout << "Press appropriate Number associated with the product : "
         << "\n1. Electronics appliances "
         << "\n2. Food "
         << "\n3. Milk products "
         << "\n4. Clothes "
         << "\nEnter your choice : ";cin>>code;
    }
};

class electronic_product:public menu{
    string name;
    float price;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << " Name of electronic Product : ";getline(cin,name);
    cout << " Price : ";cin>>price;
    cout << " Stock : ";cin>>stock;
    }
    void show_details(){
    cin.ignore();
    cout << " Name of electronic Product : "<< name << endl;
    cout << " Price : "<< price << endl;
    cout << " Stock : "<< stock;
    }
};

class kitchen_product:public menu{
    string name;
    float price;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << " Name of kitchen Product : ";getline(cin,name);
    cout << " Price : ";cin>>price;
    cout << " Stock : ";cin>>stock;
    }
    void show_details(){
    cin.ignore();
    cout << " Name of electronic Product : "<< name << endl;
    cout << " Price : "<< price << endl;
    cout << " Stock : "<< stock;
    }
};

int main(){

    return 0;
}
