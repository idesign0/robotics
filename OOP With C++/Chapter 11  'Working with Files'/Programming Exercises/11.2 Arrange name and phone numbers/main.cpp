#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
#include<iomanip>
using namespace std;

ostream & left_justify(ostream &output){
    output << setiosflags(ios::left);
    return output;
}

ostream & right_justify(ostream &output){
    output << setiosflags(ios::right);
    return output;
}

ostream & space_20(ostream &output){
    output << setw(20);
    return output;
}

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

    int i=0;
    char name[30];
    int number;
        ofile<<setw(20) <<resetiosflags(ios::adjustfield)<<setiosflags(ios::left)<< "Names" <<space_20<<setiosflags(ios::right)<<"Numbers"<< "\n";
    while(ifile >> name >> number){
        ofile<<setw(20) <<resetiosflags(ios::adjustfield)<<setiosflags(ios::left)<< name <<space_20<<setiosflags(ios::right)<<number<< "\n";
    }

    return 0;
}
