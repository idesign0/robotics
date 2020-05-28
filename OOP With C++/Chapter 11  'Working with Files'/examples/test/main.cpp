#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char name[20];

    fstream iof;
    iof.open("test.text",ios::out | ios::in | ios::app );

    cout << "Enter string name : ";
    cin >> name;

    int len = strlen(name);

    char ch;

    for(int i=0;i<len;i++){
        iof.put(name[i]);
    }
    iof.seekg(0); // goto start

    while(iof.eof()==0){
        iof.get(ch);
        cout<<ch;
    }
    iof.close();
    return 0;
}
