#include<iostream>
#include<string.h>
using namespace std;

class stringg{
    char *p;
    int len;
public:
    stringg(){len=0;p=0;}
    stringg(const char* s){
        len = strlen(s);
        p = new char[len+1];
        strcpy(p,s);
    }
    stringg(const stringg &s){
        len = s.len;
        p = new char[len+1];
        strcpy(p,s.p);
    }

    // operators + overloading

    friend stringg operator+( stringg &a,stringg &b);

    // operator <= overloading

    friend int operator<=(stringg &a,stringg &b);

    // show string

    friend void show( stringg &s){
        cout << s.p;
    }
};

stringg operator+(stringg &a,stringg &b){
    stringg temp;
    temp.len = a.len + b.len;
    temp.p = new char[temp.len+1];
    strcpy(temp.p,a.p);
    strcat(temp.p,b.p);

    return temp;
}

int operator<=(stringg &a,stringg &b){
    if(a.len<=b.len)
        return 1;
    else
        return 0;
}

int main(){

    stringg s1 = "New ";
    stringg s2 = "York";
    stringg s3 = "Delhi";

    stringg string1,string2,string3;

    string1 = s1;
    string2 = s2;
    string3 = s1 + s3;

    cout << "String1 : " ; show(string1);
    cout  << endl << "String2 : " ; show(string2);
    cout  << endl << "String3 : " ; show(string3);
    cout << "\n";

    if(string1<=string3){
        show(string1);
        cout << " is less than ";
        show(string3);
    }else{
        show(string3);
        cout << " is less than ";
        show(string1);
    }
}
