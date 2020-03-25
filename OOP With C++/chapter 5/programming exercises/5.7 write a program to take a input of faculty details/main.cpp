#include<iostream>
#include<cstring>
using namespace std;


class faculty{
    int id;
    char name[30];
    enum post{Instructor,Assistant_Professor,Associate_Professor,Professor};
    int index;
    char qualification[30];
    char address[35];

public :
    void get_data();
    void put_data();
};

    void faculty::get_data(){
        cout << "****************************************************************\n";
        cout << "Enter Asked Details below : \n\n";
        cout << "Enter faculty's id : ";
        cin >> id ;
        cout << "Enter faculty's full Name (surname name father's name): ";
        cin.get(name,30);

        cout << "Enter faculty's Post: \n";
        cout << "\t Instructions : \n";
        cout << "\t Press 1 for post of instructor : \n";
        cout << "\t Press 2 for post of Assistant_Professor : \n";
        cout << "\t Press 3 for post of Associate_Professor : \n";
        cout << "\t Press 4 for post of Professor : \n";
        cout << "\t Enter your post : ";
        cin >> index;

        cout << "Enter faculty's qualification : \n";
        cin.get(qualification,30);

        cout << "Enter faculty's address : \n";
        cin.get(address,35);
        cout << "****************************************************************\n";
        }

    void faculty::put_data(){

        cout << "****************************************************************\n";
        cout << "faculty's ID : " << id <<endl;
        cout << "faculty's full Name (surname name father's name): " << name[30] << endl;

        cout << "Enter faculty's Post: ";
        index -= index;
        switch(index){
            case Instructor : cout << "Instructor" <<endl; break;
            case Assistant_Professor : cout << "Assistant Professor" <<endl; break;
            case Associate_Professor : cout << "Associate Professor" <<endl; break;
            case Professor : cout << "Professor" <<endl; break;
            default : cout << "Invalid information" << endl;break;

        }

        cout << "faculty's qualification : " << qualification[30];

        cout << "Enter faculty's address : " << address[35];
        cout << "****************************************************************\n";
    }


int main(){

}
