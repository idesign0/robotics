#include<iostream>
#include<list>
#include<cstring>
#include<string>
using namespace std;

class student{
    string name;
    int roll_number;
public:
    student(){}

    student(const char *nAme,int rOll_num):roll_number(rOll_num){
        name = nAme;
    }

    void display(){
        cout << "Student Name : " << name << "\tStudent Roll Number : "<<roll_number << endl;
    }

    int searchh(int rOll_num){
        if(roll_number==rOll_num)
            return 1;
        else
            return 0;
    }

    int searchh(string nAme){
        if(name.compare(nAme))
            return 1;
        else
            return 0;
    }
};


int main(){
    student ostudent[5];
    list<student> phone_lit;

    int roll_number;
    string name;

    //initializing list
    phone_lit.push_back(student("Dhruv",5));
    phone_lit.push_back(student("Kathan",10));
    phone_lit.push_back(student("Gautam",15));
    phone_lit.push_back(student("Harshal",20));
    phone_lit.push_back(student("Harsh",25));

    //display
    void (student:: *pdisplay)() = &student::display;

    list<student> :: iterator p = phone_lit.begin();
    for(p;p!=phone_lit.end();p++){
        p->display();
    }

    cout << "Enter roll number of student : "; cin >> roll_number;
    p = phone_lit.begin();
    for(p;p!=phone_lit.end();p++){
        if(p->searchh(roll_number)){
            p->display();
            break;
        }
    }
    if(p==phone_lit.end()){
        cout << "Student is not listed in list !";
    }

    cin.ignore();
    cout << "Enter roll name of student : "; getline(cin,name);
    p = phone_lit.begin();
    for(p;p!=phone_lit.end();p++){
        if(p->searchh(name)){
            p->display();
            break;
        }
    }
    if(p==phone_lit.end()){
        cout << "Student is not listed in list !";
    }

    return 0;
}
