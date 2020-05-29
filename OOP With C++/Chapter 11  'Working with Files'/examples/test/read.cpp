#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    ifstream inf1;

    inf1.open("read");

    char name[30];
    if(inf1.fail()!=0){
        inf1 >> name;

        cout << name;

    }

    return 0;

}
