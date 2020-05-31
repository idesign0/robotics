#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
    char buf[80];
    ifstream fin;
    fin.open("chll_3.cpp");

    if(fin.fail()){
        cout << "....";
        exit(1);
    }

    while(fin.getline(buf,80)){
    cout<<buf<<endl;
    }
    fin.clear();
    fin.seekg(0);

    while(fin.getline(buf,80).eof()){
    cout<<buf;

        if(fin.eof()){
        cout << "....";
        exit(1);
    }
    }

    return 0;
}
