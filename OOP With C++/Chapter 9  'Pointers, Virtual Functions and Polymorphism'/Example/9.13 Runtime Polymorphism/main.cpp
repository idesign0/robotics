#include<iostream>
#include<cstring>
using namespace std;

class media{
protected:
    string title;
    float price;
public:
    media(string s,float a){
        title=s;
        price = a;
    }
    virtual void display(){};
};

class book:public media{
    int pages;
public:
    book(string s,float a,int p):media(s,a){
        pages=p;
    }
    void display(){
        cout << "\nTitle : " << title
             << "\nPrice : " << price
             << "\nPages : " << pages;

    }
};

class tape:public media{
    float time;
public:
    tape(string s,float a,float t):media(s,a){
        time=t;
    }
    void display(){
        cout << "\nTitle : " << title
             << "\nPrice : " << price
             << "\nTime : " << time;

    }
};

int main(){
    char *title=new char[20];
    int pages;
    float price,time;

    // book details
    cout << "\nEnter the book details :\n";
    cout << "Title : ";cin.getline(title,20);
    cout << "Price : ";cin>>price;
    cout << "Pages : ";cin>>pages;

    book book1(title,price,pages);

    // tape details
    cout << "\nEnter the tape details :\n";
    cout << "Title : ";cin.ignore();cin.getline(title,20);
    cout << "Price : ";cin>>price;
    cout << "Time : ";cin>>time;

    tape tape1(title,price,time);

    media *pmedia[2];
    pmedia[0] = &book1;
    pmedia[1] = &tape1;

    cout << "\nMedia details : \n";
    cout << "\n.....Book.....\n";
    pmedia[0]->display();

    cout << "\n.....Tape.....\n";
    pmedia[1]->display();
    return 0;
}
