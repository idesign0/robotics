#include<iostream>
#include<cstring>
using namespace std;

class String{
    char *name;
    int length;
public:
    String(){
    }
    String(char *s){
    length = strlen(s);
    name = new char[length+1];

    strcpy(name,s);
    }

    void display(){
    cout << name << endl;
    }

    void add(String &a,String &b){
        length = a.length + b.length;
        name=new char[length+1];

        strcpy(name,a.name);
        strcat(name,b.name);
    }

};

int main(){
    String name1,s1,s2,s3;
    name1 = String("Patel ");
    String name2("Dhruv "),name3("Prakashbhai");

    s1.add(name1,name2);
    s2.add(s1,name3);

    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    s3=s2;

    s3.display();

    return 0;
}
