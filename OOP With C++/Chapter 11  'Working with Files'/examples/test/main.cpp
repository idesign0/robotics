#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    ifstream inf1,inf2;

    inf1.open("country");
    inf2.open("capital");

    ofstream of;
    of.open("results.text");

    char name[80];

    for(int i=0;i<10;i++){

        if(inf1.eof() !=0 ){
            cout<< "....";
            exit(1);
        }

        inf1.getline(name,80);
        of << "Capital of " << name ;
        cout << "Capital of " << name ;

        if(inf2.eof() !=0 ){
            cout<< "....";
            exit(1);
        }

        inf2.getline(name,80);

        of.seekp(0,ios::end);

        cout << name << "\n";
        of << name << "\n";
    }
    return 0;

}
