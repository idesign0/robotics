#include<iostream>
#include<cstring>
using namespace std;

class city{
protected:
    char *name;
    int len;
public:
    city(){
        len=0;
        int len;
    }
    void getdata(){
        char *s;
        s=new char[30];

        cout << "Enter your city name : ";cin >> s;
        len= strlen(s);

        name = new char[len+1];
        strcpy(name,s);
    }
    void printname(){
        cout << name << "\n";
    }
};

int main(){
    city *cptr[10]; // arrays of 10 pointers to cities
    int n=0;
    int option;

    do{
        cptr[n]= new city; // create new city
        cptr[n]->getdata();
        n++;

        cout << "Do you want to enter the new name ? \n";
        cout << "(Enter 1 for yes 0 for no):";
        cin>>option;
    }while(option);

    cout << "\n\n";
    for(int i=0;i<n;i++){
        cptr[i]->printname();
    }
    return 0;
}
