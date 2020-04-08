#include<iostream>
#include<string.h>

using namespace std;

class book{
    char *title,*author,*publisher;
    float *price;
    int *stock;

public:
    book(){
    title = new char[20];
    author = new char[20];
    publisher = new char[20];
    price = new float;
    stock = new int;
    }

    void feeddata();
    void showdata();
    void buybook();
    int searchh(char[],char[]);
};
    void book::feeddata(){
        cin.ignore();
        cout << "Enter Books name : " ; cin.getline(title,20);
        cout << "Enter authors name : " ; cin.getline(author,20);
        cout << "Enter publisher name : " ; cin.getline(publisher,20);
        cout << "Enter Price : "; cin >> *price;
        cout << "Enter Stock position : "; cin >> *stock;
    }

    void book::showdata(){
        cin.ignore();
        cout << "Enter Books name : " << title;
        cout << "Enter authors name : " << author;
        cout << "Enter publisher name : " << publisher;
        cout << "Enter Price : "<< *price;
        cout << "Enter Stock position : "<< *stock;
    }
