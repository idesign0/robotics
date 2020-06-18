#include<iostream>
#include<vector>
#include<cstring>
#define NAMESIZE 40

using namespace std;

class Employeemaster{
    char name[NAMESIZE];
    int id;
public:
    Employeemaster(){
        strcpy(name,"hihi");
        id=0;
    }
    Employeemaster(char name[NAMESIZE],int id):id(id){
       strcpy(this->name,name);
    }
    Employeemaster getvaluefromuser(){
        cout << endl << "Enter user name : ";
        cin >> name;

        cout << endl << "Enter user id : ";
        cin >> id;
    }
    void displayrecord(){
        cout << endl << "Name  : " << name;
        cout << endl << "ID : " << id << endl;
    }
};

int main(){
    vector<Employeemaster> emp;

    emp.push_back(Employeemaster("IDesign0",2666));
    emp[0].displayrecord();

    emp.push_back(Employeemaster());
    emp[1].displayrecord();

    Employeemaster *temp;
    temp->getvaluefromuser();

    emp.push_back(*temp);
    emp[2].displayrecord();

    return 0;
}
