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
        cout << "Enter Books name : " << title;
        cout << "Enter authors name : " << author;
        cout << "Enter publisher name : " << publisher;
        cout << "Enter Price : "<< *price;
        cout << "Enter Stock position : "<< *stock;
    }
    void book::buybook(){
        int countt;
        cout << "\nEnter number of books to buy : " ; cin >> countt;
        if(countt<=*stock){
            *stock = *stock - countt;
            cout << "\nBooks bought successfully";
            cout << "\nAmount : " << (*stock)*price;
        else{
            cout << "\nRequire copies are not in stock";
        }
        }
    }
    int book::searchh(char tbuy[20],char abuy[20]){
        if(strcmp(tbuy,title)==0 && strcmp(abuy,author)==0){
            return 1;
        }else{
            return 0;
        }
    }

int main(){
    book *B[20];
	int i=0,r,t,choice;
	char titlebuy[20],authorbuy[20];
	while(1)	{
		cout<<"\n\n\t\tMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Buy Book"
		<<"\n3. Display Books"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;


	}
    return 0;
}

