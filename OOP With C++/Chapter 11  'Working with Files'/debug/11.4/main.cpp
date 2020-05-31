#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
    char str[20]="Test string ";
    fstream file;

    file.open("text",ios::in | ios::out | ios::app);
    for(int i=0;i<strlen(str);i++){
        file.put(str[i]);
    }

    file.seekg(0);

    char ch;
    cout << "Reading contents of the file : " << endl;
    while(file){
        file.get(ch);
        cout << ch;
    }
    return 0;
}
