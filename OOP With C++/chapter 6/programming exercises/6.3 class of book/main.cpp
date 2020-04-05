#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class book{
    char* title;
    char* author;
    char* publisher;

    float price;
    int stock;
public:
    book(){}
    book(string t,string a,string p){
        title = t;
        author = a;
        publisher = p;

        cout << title << endl;
        cout << author << endl;
        cout << publisher << endl;
    }
};
int main(){
    int sizee=0;

    int option;
    do{
    string booktitle;
    string bookauthor;
    string bookpublisher;

    cout << "Give your price : ";
    cin >> option;
    cout << "\nEnter book title : ";
    cin.ignore('\n');
    cin >> booktitle;
    cout << "\nEnter book author : ";
    cin.ignore('\n');
    cin >> bookauthor;
    cout << "\nEnter book publisher : ";
    cin.ignore();
    cin >> bookpublisher;

    book(booktitle,bookauthor,bookpublisher);
    }while(option!=0);
    return 0;
}
