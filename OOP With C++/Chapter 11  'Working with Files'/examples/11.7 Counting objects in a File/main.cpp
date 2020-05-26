#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class emp{
    char name[30];
    int ecode;
public:
    emp(){}
    emp(char *n,int e){
        strcpy(name,n);
        ecode=e;
    }
};

int main(){
    emp e[4];
    e[0] = emp("Amit",1);
    e[1] = emp("Joy",2);
    e[2] = emp("Rahul",3);
    e[3] = emp("Vikas",4);

    fstream file;
    file.open("employee.dat",ios::in | ios ::out | ios::trunc);

    for(int i=0;i<4;i++){
        file.write((char*)&e[i],sizeof(e[i]));
    }
    file.seekg(0,ios::end);
    int end=file.tellg();

    cout << "\nNumber objects stored in Employee.dat is : " << end/sizeof(emp);
}
