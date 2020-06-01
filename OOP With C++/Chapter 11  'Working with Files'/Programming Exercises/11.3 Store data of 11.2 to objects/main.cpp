#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>

using namespace std;

class contacts{
    char name[30];
    int numbers;
public :
    contacts(){}
    contacts(char nam[30],int cell_number){
        strcpy(name,nam);
        numbers=cell_number;
    }
    void display(){
    cout << "Name : " << name << " " << "Numbers : " << numbers << endl;
    }
};
int main(){
    ifstream infile;
    infile.open("file1.text");

    fstream outfile("file2.DAT",ios::in | ios::out | ios::app);

    contacts o_contact[5];
    char name[30];
    int number;
    int i=0;

    outfile.seekg(0);

    while(outfile.read((char *)&o_contact[i],sizeof(o_contact[i]))){
        o_contact[i].display();
    }

    return 0;
}
