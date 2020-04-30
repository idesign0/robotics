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

int main(){

    return 0;
}
