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
    void get_data(){
        cout << "****************************************************************\n";
        cout << "Enter Asked Details below : \n\n";
        cout << "Enter faculties id : ";
        cin >> id ;
        cout << "Enter faculties full Name (surname name father's name): ";
        cin.get(name,30);

        cout << "Enter faculties Post: \n";
        cout << "\t Instructions : \n";
        cout << "\t Press 1 for post of instructor : \n";
        cout << "\t Press 2 for post of Assistant_Professor : \n";
        cout << "\t Press 3 for post of Associate_Professor : \n";
        cout << "\t Press 4 for post of Professor : \n";
        cout << "\t Enter your post : ";
        cin >> index;

        cout << "Enter faculties qualification : \n";
        cin.get(qualification,30);

        cout << "Enter faculties address : \n";
        cin.get(address,35);

        }
};

int main(){

}
