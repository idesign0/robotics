#include<iostream>
#include<string>
using namespace std;

class String{
    char name*;
    int length;
public:
    String(){
    length = 0;
    name = new char[length+1];
    }

    String(char *s){
    length = strln(s);
    name = new char[length+1];

    strcpy(name,s);
    }

    void display(void){
        cout << name << "\n";
    }

    void String:: join(String &a,String &b){
    length = a.length + b.length;
    delete name;

    name = new char[length+1];

    strcpy(name,a.name);
    strcpy(name,b.name);
    }
};


int main(){
    char *first= "Joseph ";
    String name1(first), name2("Louis "), name3("Lagrange "),s1,s2;

    s1.na

 return 0;

}
