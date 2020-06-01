#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
#include<iomanip>
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
    //cout.fill('_');
    cout <<resetiosflags(ios::adjustfield)<<setiosflags(ios::left)<<"Name : " <<setw(15)<< name <<setw(5)<<setiosflags(ios::right)<< "Numbers : " << numbers << endl;
    }
    void display_name(){
    cout <<"Name : " << name << endl;
    }
    void display_number(){
    cout << "Numbers : " << numbers << endl;
    }

    int searchh(char *n){
        if(strcmp(name,n)==0){
            return 1;
        }else
            return 0;
    }

    int searchh(int n){
        if(numbers==n){
            return 1;
        }else
            return 0;
    }

};
int main(){
    ifstream infile;
    infile.open("file1.text");

    fstream outfile("file2.DAT",ios::in | ios::out | ios::ate);

    contacts o_contact;
    char name[30];
    int number;
    int i=0,option;

    while(1){

        cout << "Menu : \n"
             << "\nChoose appropriate Option for required action : "
             << "\n1.Display Data"
             << "\n2.Get the number by Name"
             << "\n3.Get the Name by Number"
             << "\n4.Modify the Number by Name"
             << "\n5.Quite"
             << "\n\nGive appropriate option : ";cin>>option;

        switch(option){
            case 1 :cout<<"\n******************************************************\n";
                    /*---------------To Display Name and Numbers-----------------*/

                    // to read the data;
                    outfile.seekg(0);
                    while(outfile.read((char *)&o_contact,sizeof(o_contact))){
                            o_contact.display();
                        }

                    outfile.clear();
                    cout<<"\n******************************************************\n";
                    break;

            case 2 :cout<<"\n******************************************************\n";
                    /*---------------To get Number by Name-----------------*/
                    cout << "Enter Name of the Employee : "; cin >> name;

                    // to read the data;
                    outfile.seekg(0);
                    while(outfile.read((char *)&o_contact,sizeof(o_contact))){
                        if(o_contact.searchh(name)){
                            o_contact.display_number();
                        }
                    }
                    outfile.clear();
                    cout<<"\n******************************************************\n";
                    break;

            case 3 :
                    cout<<"\n******************************************************\n";
                    /*---------------To get Name by Number-----------------*/

                    cout << "Enter Number of the Employee : "; cin >> number;

                    // to read the data;
                    outfile.seekg(0);
                    while(outfile.read((char *)&o_contact,sizeof(o_contact))){
                        if(o_contact.searchh(number)){
                            o_contact.display_name();
                        }
                    }
                    outfile.clear();
                    cout<<"\n******************************************************\n";
                    break;
            case 4 :
                    cout<<"\n******************************************************\n";
                    /*---------------To Modify Number by giving Name-----------------*/

                    cout << "Enter the Name of Employee and His new number : ";cin>>name>>number;
                    outfile.seekg(0);
                    i=0;

                    cout<<"\n******************************************************\n";
                    cout << "Modified DATA : \n\n";
                    while(outfile.read((char *)&o_contact,sizeof(o_contact))){
                        if(o_contact.searchh(name)){

                            o_contact=contacts(name,number);
                            int location = i*sizeof(contacts);

                            outfile.seekp(location);
                            outfile.write((char *)&o_contact,sizeof(o_contact))<<flush;

                            // to read the data;
                            outfile.seekg(0);
                            while(outfile.read((char *)&o_contact,sizeof(o_contact))){
                                o_contact.display();
                        }
                    }
                        i++;
                    }
                    outfile.seekg(0);
                    outfile.clear();
                    cout<<"\n******************************************************\n";

                    break;
            case 5 : exit(1);
            default : cout << "Invalid Choice ! ";
            }

        }


    return 0;
}
