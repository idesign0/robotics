#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

const char* string_conversion(string);

class book{
    char* title;
    char* author;
    char* publisher;

    float price;
    int stock;
public:
    book(){}
    book(const char* t,const char* a,const char* p){

        title = new char[strlen(t)+1];
        author = new char[strlen(a)+1];
        publisher = new char[strlen(p)+1];

        strcpy(title,t);
        strcpy(author,a);
        strcpy(publisher,p);

        cout << title << endl;
        cout << author << endl;
        cout << publisher << endl;
    }
};

const char* string_conversion(string a){
    const char* s = a.c_str();
    return s;
}

int main(){
    int sizee=0;
    book O_book[sizee];
    int option;
    do{
        cout << "Give your price : ";
        cin >> option;

    switch(option){
        case '1' :
            {
                string booktitle;
                string bookauthor;
                string bookpublisher;

                cout << "\nEnter book title : ";
                cin.ignore();
                getline(cin,booktitle);

                cout << "Enter book author : ";
                cin.ignore();
                getline(cin,bookauthor);

                cout << "Enter book publisher : ";
                cin.ignore();
                getline(cin,bookpublisher);

                const char* c_booktitle = string_conversion(booktitle);
                const char* c_bookauthor = string_conversion(bookauthor);
                const char* c_bookpublisher = string_conversion(bookpublisher);
                O_book[sizee] = book(c_booktitle,c_bookauthor,c_bookpublisher);
                sizee++;
                break;
    }
        case 2 :{ break;}
        default : cout << "Inappropriate choice ";
    }
    }while(option!=0);
    return 0;
}
