#include<iostream>
#include<iomanip>
#include<cstring>

int space =20;
using namespace std;

class book{
    char* title;
    char* author;
    char* publisher;

    float price;
    int stock;
    int *pstock =&stock ;
public:
    book(){}
    book(const char* t,const char* a,const char* p,float price,int s){

        title = new char[strlen(t)+1] ;
        author = new char[strlen(a)+1] ;
        publisher = new char[strlen(p)+1] ;

        strcpy(title,t);
        strcpy(author,a);
        strcpy(publisher,p);

        cout << title << endl;
        cout << author << endl;
        cout << publisher << endl;

        this->price=price;
        *pstock=s;
    }
    void displaybooks(){
        cout << setw(space)<< title << setw(space) <<author<< setw(space) <<publisher<< setw(space) <<price<<setw(space)<<stock<<endl;
    }
    void add_items(const char* book_name){
        if(strlen(book_name)==strlen(title) ){
            int quantity;
            cout << "enter how many copies you want to add : ";
            cin >> quantity;
            *pstock = *pstock + quantity;
        }
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
                float price;
                int stock;

                cout << "\nEnter book title : ";
                cin.ignore();
                getline(cin,booktitle);

                cout << "Enter book author : ";
                cin.ignore();
                getline(cin,bookauthor);

                cout << "Enter book publisher : ";
                cin.ignore();
                getline(cin,bookpublisher);

                cout << "Enter books price : ";
                cin.ignore();
                cin>>price;

                cout << "Enter books stock : ";
                cin.ignore();
                cin>>stock;

                const char* c_booktitle = booktitle.c_str();
                const char* c_bookauthor = bookauthor.c_str();
                const char* c_bookpublisher = bookpublisher.c_str();

                O_book[sizee] = book(c_booktitle,c_bookauthor,c_bookpublisher,price,stock);
                sizee++;
                break;
        }
    case 2 :{
            cout << setw(space)<< "Books Title" << setw(space) <<"Books author" << setw(space) << "Books Publisher" << setw(space) <<"Price"<<setw(space)<<"Stock"<<endl;
            for(int i=0;i<=sizee;i++){
                O_book[i].displaybooks();
            }break;
            }
    case 3 :{
            string book_name;
            cout << "To add copies enter book name : " ;

            cin.ignore();
            getline(cin,book_name);

            const char* c_book_name= book_name.c_str();

            for(int i=0;i<=sizee;i++){
                O_book[i].add_items(c_book_name);
            }
        }break;
    }
    }while(option!=0);

    return 0;
}

