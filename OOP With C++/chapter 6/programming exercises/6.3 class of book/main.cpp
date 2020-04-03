#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class book{
    char *title;
    int title_length;

    char *author;
    int author_length;

    char *publisher;
    int publisher_length;

    float price;
    int stock_position;

public:
    book(){}
    book(const char * t,const char * a,const char * p){



        int title_length = strlen(t);
        int author_length = strlen(a);;
        int publisher_length = strlen(p);;

        title= new char[title_length+1];
        author= new char[author_length+1];
        publisher= new char[publisher_length+1];



        strcpy(title,t);
        strcpy(author,a);
        strcpy(publisher,p);

        cout << title << author <<publisher;

    }


};
int main(){
    int sizee=0;
    book o_book[sizee];
    int option;

    cout << "******************************************************\n\n";
    cout <<"Below are Some choices, Choose following Option : \n";
    cout <<"\n1 : Add New Book";
    cout <<"\n2 : Add copies of Books";
    cout <<"\n3 : Display Details of books";
    cout <<"\n4 : Buy one book";
    cout <<"\n Choose appropriate option : ";
    cin >> option ;

    switch(option){
    case 1 :

        string title;
        string author;
        string publisher;

        cin >> title;
        const char* c_t = title.c_str();
        cin>> author;
        const char* c_a = author.c_str();
        cin>> publisher;
        const char* c_p = publisher.c_str();

        o_book[0]=book(c_t,c_a,c_p);
    }
    return 0;

}
