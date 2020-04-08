#include<iostream>
using namespace std;
int string_length(char *);
int string_length(string&);
int valuecahnge(int &);
int main(){
    char *name = "0123456789";
    string sname = "asdas";
    int x =10;

    int length = string_length(name);
    cout << "String length : " << length << endl;

    cout << "length of string : " << string_length(sname);

    cout << "changed name : " << sname << endl;
    valuecahnge(x);
    cout << x;

    }
int string_length(char*name){
    int i =0;
    while(name[i]!=NULL){
        i++;
    }
    return i;
}
int string_length(string& name){

    name = "qsss";
    int i =0;
    while(name[i]!=NULL){
        i++;
    }
    return i;
}
int valuecahnge(int & x){
    x = 15;
}
