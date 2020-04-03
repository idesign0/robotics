#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>

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
    book(const char * t,const char * a,const char * p,float price,int stock);

    void display_items(int s);
    void add_copies();
};

    book::book(const char * t,const char * a,const char * p,float price,int stock){

    // to find out the length of strings
        int title_length = strlen(t);
        int author_length = strlen(a);
        int publisher_length = strlen(p);

    // dynamic allocations of memory
        title= new char[title_length+1];
        author= new char[author_length+1];
        publisher= new char[publisher_length+1];

    //putting string in respective place holders of objects
        strcpy(title,t);
        strcpy(author,a);
        strcpy(publisher,p);

        this->price=price;
        this->stock_position=stock;

    }

    void book::display_items(int s){
        int space =s;
        cout<< setw(space)<< title << setw(space) << author << setw(space) << publisher << setw(10) << stock_position<<setw(10) << price << endl;
    }

    void book::add_copies(){
    }

int main(){
    int sizee=0;
    book o_book[sizee];
    int option;

   do{

   cout << "******************************************************\n\n";
    cout <<"Below are Some choices, Choose following Option : \n";
    cout <<"\n1 : Add New Book";
    cout <<"\n2 : Add copies of Books";
    cout <<"\n3 : Display Details of books";
    cout <<"\n4 : Buy one book";
    cout <<"\n5 : Quit";
    cout <<"\n Choose appropriate option : ";
    cin >> option ;
    cout << "******************************************************\n\n";
    switch(option){
    case 1 :
{

        string title;
        string author;
        string publisher;
        float price;
        unsigned int stock;

        cout << " Enter Books Title : " ;
        cin.ignore();
        getline(cin,title);
        const char* c_title = title.c_str(); // converting string to constant char

        cout << "Enter Authors name : " ;
        cin.ignore();
        getline(cin,author);
        const char* c_author = author.c_str();

        cout << "Enter Publishers name : " ;
        cin.ignore();
        getline(cin,publisher);
        const char* c_publisher = publisher.c_str();

        cout << "Enter Price of the book : " ;
        cin >> price;

        cout << "Enter initial stock of this book : " ;
        cin >> stock;

        o_book[sizee]=book(c_title,c_author,c_publisher,price,stock); // initialized the object
        sizee++; break;
}
    case 2 :
        {
        string name;
        cout << "Enter the Name of book : ";
        cin.ignore();
        getline(cin,name);
        const char *c_name = name.c_str();

            for(int i=0;i<sizee;i++){

            }
        }
    case 3 :
        {
        int space = 20;
        cout << setw(space)<<"Book Title :" << setw(space) << "Author" << setw(space) << "Publisher" << setw(10) << "Stock"<<setw(10) << "Price"<< endl;

        for(int i =0;i<sizee;i++){
            o_book[i].display_items(space);
        }
        break;
        }
    }
    }while(option!=5);
    return 0;

}
