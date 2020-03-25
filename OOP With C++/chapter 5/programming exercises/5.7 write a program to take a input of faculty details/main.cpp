#include<iostream>
#include<string>
using namespace std;


class faculty{
    int id;
    string name;
    enum post{Instructor=1,Assistant_Professor,Associate_Professor,Professor};
    int index;
    string qualification;
    string address;

public :
    void get_data();
    void put_data();
};

    void faculty::get_data(){
        cout << "****************************************************************\n";
        cout << "Enter Asked Details below : \n\n";
        cout << "Enter faculty's id : ";
        cin >> id ;
        cout << "\nEnter faculty's full Name (surname name father's name): ";

        cin >> name;

        cout << "\nEnter faculty's Post: \n";
        cout << "\t Instructions : \n";
        cout << "\t Press 1 for post of instructor : \n";
        cout << "\t Press 2 for post of Assistant_Professor : \n";
        cout << "\t Press 3 for post of Associate_Professor : \n";
        cout << "\t Press 4 for post of Professor : \n";
        cout << "\t Enter your post : ";
        cin >> index;

        cout << "Enter faculty's qualification : \n";

        cin >> qualification;

        cout << "Enter faculty's address : \n";
        cin >> address;
        cout << "****************************************************************\n";
        }

    void faculty::put_data(){

        cout << "****************************************************************\n";
        cout << "faculty's ID : " << id <<endl;
        cout << "faculty's full Name (surname name father's name): " << name << endl;

        cout << "Enter faculty's Post: ";

        switch(index){
            case Instructor : cout << "Instructor" <<endl; break;
            case Assistant_Professor : cout << "Assistant Professor" <<endl; break;
            case Associate_Professor : cout << "Associate Professor" <<endl; break;
            case Professor : cout << "Professor" <<endl; break;
            default : cout << "Invalid information" << endl;break;

        }

        cout << "faculty's qualification : " << qualification <<endl;

        cout << "Enter faculty's address : " << address<<endl;
        cout << "****************************************************************\n";
    }


int main(){
    faculty o_faculty1,o_faculty2;

    o_faculty1.get_data();
    o_faculty2.get_data();

    o_faculty1.put_data();
    o_faculty2.put_data();

}
