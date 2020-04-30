#include<iostream>
using namespace std;

class faculty{
private:
    int fid;
    char name[20];

    void getdata(){
        cout <<"Enter Faculty ID : "; cin >> fid;
        cout <<"Enter Name : "; cin >> name;
    }
};

class details: faculty{
public:
    int age,exp;
    void getdetails(){
        getdata();
        cout << "Enter Age : ";cin>>age;
        cout << "Enter Year of experience : ";cin>>exp;
    }
    void display(){

    }
};

int main(){

    return 0;
}
