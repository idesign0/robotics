#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
    char buf[80];
    ifstream fin;
    ofstream fout("chll_2.cpp");

    fout << "aasdasdasdas";;
    fout.close();

    fin.open("chll_2.cpp");

    if(fin.fail()){
        cout << "....";
        exit(1);
    }

    fin.getline(buf,80);
    cout<<buf;
    return 0;
}
