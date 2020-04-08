#include<iostream>
#include<string.h>
#include<stdlib.h>
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
    void editdata();
    void showdata();
    void buybook();
    int searchh(char[],char[]);
};
    void book::feeddata(){
        cin.ignore();
        cout << "\nEnter Books name : " ; cin.getline(title,20);
        cout << "Enter authors name : " ; cin.getline(author,20);
        cout << "Enter publisher name : " ; cin.getline(publisher,20);
        cout << "Enter Price : "; cin >> *price;
        cout << "Enter Stock position : "; cin >> *stock;
    }
    void book::editdata(){
        cin.ignore();
        cout << "\nEnter Books name : " ; cin.getline(title,20);
        cout << "Enter authors name : " ; cin.getline(author,20);
        cout << "Enter publisher name : " ; cin.getline(publisher,20);
        cout << "Enter Price : "; cin >> *price;
        cout << "Enter Stock position : "; cin >> *stock;
    }
    void book::showdata(){
        cout << "\nEnter Books name : " << title;
        cout << "\nEnter authors name : " << author;
        cout << "\nEnter publisher name : " << publisher;
        cout << "\nEnter Price : "<< *price;
        cout << "\nEnter Stock position : "<< *stock;
    }
    void book::buybook(){
        int countt;
        cout << "\nEnter number of books to buy : " ; cin >> countt;
        if(countt<=*stock){
            *stock = *stock - countt;
            cout << "\nBooks bought successfully";
            cout << "\nAmount : " << (*price)*countt<<endl;}
        else{
            cout << "\nRequire copies are not in stock";
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
		cout<<"\n\nMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Buy Book"
		<<"\n3. Display Books"
		<<"\n4. Edit Books data"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;

    switch(choice){
        case 1 :{ B[i] = new book;
                B[i]->feeddata();
                i++; break;
    }
        case 2 :{ cin.ignore();
        cout << "\nEnter title of the book : "; cin.getline(titlebuy,20);
        cout << "\nEnter name of author of the book : "; cin.getline(authorbuy,20);
        for(t=0;t<i;t++){
            if(B[t]->searchh(titlebuy,authorbuy)){
                B[t]->buybook();
                break;
            }
            }
        if(t==i)
            {cout<<"\nThis Book is Not in Stock";}
            break;
        }

        case 3 : { cin.ignore();
				cout<<"\nEnter Title Of Book : "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book : ";  cin.getline(authorbuy,20);

				for(t=0;t<i;t++)	{
					if(B[t]->searchh(titlebuy,authorbuy))	{
						cout<<"\nBook Found Successfully";
						B[t]->showdata();
						break;
					}
				}
				if(t==i)
				{cout<<"\nThis Book is Not in Stock";}
				break;
}
        case 4 : { cin.ignore();
        cout << "Enter Book Title : " ;cin.getline(titlebuy,20);
        cout << "Enter Book author name : " ;cin.getline(authorbuy,20);
            for (t=0;t<i;t++){
                if(B[i]->searchh(titlebuy,authorbuy)){
                    B[i]->editdata();
                    break;
                }
            }
            if(t==i)
                {cout<<"\nThis Book is Not in Stock";}
				break;
}
        case 5 : exit(0);

        default: cout<<"\nInvalid Choice Entered";

    }
	}
    return 0;
}

