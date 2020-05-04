#include<iostream>
using namespace std;

class person{
protected:
    string name;
    int code;
public:
    void get_details(){
    cout << "Name of Person : ";getline(cin,name);
    cout << "Enter code : "; cin >>code;
    }
    void update_details(){
    cout << "Name of Person : ";getline(cin,name);
    cout << "Enter code : "; cin >>code;
    }
    void show_details(){
    cout << "Name of Person : "<<name;
    cout << "Enter code : "<< code;
    }
};

class account:public virtual person{
protected:
    float pay;
public:
    void get_details(){
    cout << "pay of the person : ";cin>> pay;
    }
    void update_details(){
    cout << "pay of the person : ";cin>> pay;
    }
    void show_details(){
    cout << "pay of the person : "<<pay;
    }
};

class admin:public virtual person{
protected:
    string experience;
public:
    void get_details(){
    person::get_details();
    cout << "Experience : ";getline(cin,experience);
    }
    void update_details(){
    person::update_details();
    cout << "Experience : ";getline(cin,experience);
    }
    void show_details(){
    person::show_details();
    cout << "Experience : "<<experience;
    }
};

class master:public account,public admin{
public:
    get_details(){
        admin::get_details();
        account::get_details();
    }
    show_details(){
        admin::show_details();
        account::show_details();
    }

};

int main(){

    return 0;
}
