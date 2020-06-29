#include <iostream>
#include<cstring>
using namespace std;

class stringg{
    char *p;
    int len;

public:
    stringg(){
    len=0;
    p = new char[len+1];
    }

    stringg(char *s){
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
    }

    stringg(stringg &s){
    delete p;
    len=strlen(s.p);
    p=new char[len+1];
    strcpy(p,s.p);
    }

    void display(){
        cout << p<<endl;
    }
};

int main(){
    stringg dhruv("HII i am dhruv  ");
    dhruv.display();

    dhruv = "HIi i am not dhruv ";
    dhruv.display();

    return 0;
}
