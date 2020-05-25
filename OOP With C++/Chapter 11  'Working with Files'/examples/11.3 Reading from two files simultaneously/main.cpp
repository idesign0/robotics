#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    const int SIZE=80;
    char line[SIZE];

    ifstream inf1("country"),inf2("capital");

    for(int i=1;i<=10;i++){
        if(inf1.eof()!=0){
            cout << "Exit from country \n";
            exit(1);
            }

        inf1.getline(line,SIZE);
        cout<< "Capital of " << line ;
        if(inf1.eof()!=0){
            cout<<"Exit from capital \n";
            exit(1);
        }

        inf2.getline(line,SIZE);
        cout<<line<<"\n";
    }
        return 0;
}
