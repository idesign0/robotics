#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

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
    ~book(){
        delete []title;
        delete []author;
        delete []publisher;
    }
};

int main(){
    int sizee=0;
    book O_book[sizee];
    int option;
    do{
                cout << "Give your price : " ;
                cin >> option;
    switch(option){
    case 1:
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

                const char* c_booktitle = booktitle.c_str();
                const char* c_bookauthor = bookauthor.c_str();

                const char* c_bookpublisher = bookpublisher.c_str();
                O_book[sizee] = book(c_booktitle,c_bookauthor,c_bookpublisher);
                sizee++;
                break;
        }
    case 2 :     break;
    }
    }while(option!=0);
    return 0;
}
