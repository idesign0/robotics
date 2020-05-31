#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>

using namespace std;

int main(){
    ifstream ifile;
    ofstream ofile;

    ifile.open("file1.text");
    ofile.open("file2.text");

    if(ifile.eof() && ofile.eof()){
        cout<<"...";
        exit(1);
    }
    if(ifile.bad() && ofile.bad()){
        cout<<"bad";
        exit(1);
    }
    if(ifile.fail() && ofile.fail()){
        cout<<"fail";
        exit(1);
    }
  //  iof << "dhRUV P PATEL";

    int i=0;
    char name[100];
    ifile.seekg(0);

    while(ifile >> name){
        ofile << name <<" ";
    }

    return 0;
}
