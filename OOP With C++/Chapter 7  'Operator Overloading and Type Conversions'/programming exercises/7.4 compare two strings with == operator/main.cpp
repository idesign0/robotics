#include<iostream>
#include<string.h>
using namespace std;

class stringg{
    char * str;
    int length;
public:
    stringg(){
        length=0;
        str = new char[length+1];
    }
    stringg(const char* s){
        length=strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }
    friend ostream & operator<<(ostream &dout,stringg &s){
            dout << s.str;
            return dout ;
    }

    int operator==(stringg &s){
        if(strcmp(str,s.str)==0){
            return 1;
        }
        else
            return 0;
    }
};
int main(){
    stringg s1,s2;
    s1 = "hii ";
    s2= "Dhruv";

    (s1==s2) ? cout << "Two string are same" : cout << "Two string are different";
    return 0;
}
