#include<iostream>
using namespace std;

class faculty{
protected:
    int fid;
    char name[20];
public:
        void getdata(){
        cout <<"Enter Faculty ID : "; cin >> fid;
        cout <<"Enter Name : "; cin.ignore(); cin.getline(name,20);
    }
};

class details: private faculty{
    int age,exp;
    public:
    void getdetails(){
        getdata();
        cout << "Enter Age : "; cin >> age;
        cout << "Enter Year of experience : ";cin>>exp;
    }
    void display(){
        cout << "\n\nFaculty id : " << fid << endl;
        cout << "Name of Faculty : " << name << endl;
        cout << "Faculty Age : " << age << endl;
        cout << "Faculty year of exp : " << exp << endl;
    }
};

int main(){
    details m;
    m.getdetails();
    m.display();
    return 0;
}
