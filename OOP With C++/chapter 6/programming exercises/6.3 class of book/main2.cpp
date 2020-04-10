#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class book{

    char* title;
    char* author;
    char* publisher;
    float* price;
    int* stock;

public:
    book(){
    title = new char[20];
    author = new char[20];
    publisher = new char[20];
    price = new float;
    stock = new int;
    }

    void feeddata();
    void buybook();
    void showdata();
    void editdata();
    int searchh(char[],char[]);
};

void book::feeddata(){
    cin.ignore();
    cout << "\nEnter title name : "; cin.getline(title,20);
    cout << "Enter author name : "; cin.getline(author,20);
    cout << "Enter publisher name : "; cin.getline(publisher,20);
    cout << "Enter Books price : "; cin >> *price;
    cout << "Enter Books stock : "; cin >> *stock;
}
int book::searchh(char tbuy[20],char abuy[20]){
    if(strcmp(tbuy,title)==0 && strcmp(abuy,author)==0){
            return 1;
    }
    else{
        return 0;
        }
}
void book::buybook(){
        int copies;
        cout << "\nHow many copies need to buy : "; cin >> copies;

        if(copies<=*stock){
            *stock=*stock-copies;
            cout << "Total amount of the bill : " << (*price)*copies;
        }
        else
            cout << "Require amount of books are not in stock";

}
void book::showdata(){
    cout << "\nDetails of the books : " ;
    cout << "\nName of the book : " << title;
    cout << "\nName of the author : " << author;
    cout << "\nName of the publisher : " << publisher;
    cout << "\nPrice of the book : " << *price;
    cout << "\nStock position of the book : " << *stock;
}
void book::editdata(){
    cin.ignore();
    cout << "\nEnter title name : "; cin.getline(title,20);
    cout << "Enter author name : "; cin.getline(author,20);
    cout << "Enter publisher name : "; cin.getline(publisher,20);
    cout << "Enter Books price : "; cin >> *price;
    cout << "Enter Books stock : "; cin >> *stock;
}
int main(){
    book *o_book[20];
    int option,countt=0,i=0;
    char title[20];
    char author[20];
    while(1){
        cout<< "\nMenu : "
            << "\n1. Add New books"
            << "\n2. Buy books"
            << "\n3. Show books"
            << "\n4. Edit book details"
            << "\n5. quite";

        cout << "\n\nEnter appropriate number : "; cin >> option;

        switch(option){
            case 1 : {
                     o_book[countt] = new book;
                     o_book[countt]->feeddata();
                     countt++; break;
                     }
            case 2 :{cin.ignore();
                     cout << "Enter the name of the book : " ; cin.getline(title,20);
                     cout << "Enter the name of the author : " ; cin.getline(author,20);
                     for(i=0;i<countt;i++){
                        if(o_book[i]->searchh(title,author)){
                            o_book[i]->buybook();
                            break;
                        }
                    }
                    if(i==countt){
                        cout<<"\nThis Book is Not in Stock";
                    }break;}
            case 3 :{cin.ignore();
                     cout << "Enter the name of the book : " ; cin.getline(title,20);
                     cout << "Enter the name of the author : " ; cin.getline(author,20);
                     for(i=0;i<countt;i++){
                        if(o_book[i]->searchh(title,author)){
                            o_book[i]->showdata();
                            break;
                        }
                    }
                    if(i==countt){
                        cout<<"\nThis Book is Not in Stock";
                    }break;}
            case 4 :{cin.ignore();
                     cout << "Enter the name of the book : " ; cin.getline(title,20);
                     cout << "Enter the name of the author : " ; cin.getline(author,20);
                     for(i=0;i<countt;i++){
                        if(o_book[i]->searchh(title,author)){
                            o_book[i]->editdata();
                            break;
                        }
                    }
                    if(i==countt){
                        cout<<"\nThis Book is Not in Stock";
                    }break;}
            case 5 :{exit(0);}
            default : cout << "\nin appropriate input,choose valid option.";
        }
}
    return 0;

}
