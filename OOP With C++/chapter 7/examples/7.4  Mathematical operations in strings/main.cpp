#include<string.h>
#include<iostream>

using namespace std;

class stringg{
    public:
    char *p;
    int len;
    stringg(){len=0;p=0;} // create null string
    stringg(const char *s);
    stringg(const stringg &s);


    // + operator
    friend stringg operator+(const stringg &s, const stringg &t);

    // <= operator
    friend int operator<=(const stringg &s, const stringg &t);
    friend void show(const stringg &s);
};

stringg::stringg(const char *s){
    len = strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
stringg::stringg(const stringg &s){
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);
}
// overloading + operator
stringg operator+(const stringg &s, const stringg &t){
    stringg temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len + 1];

    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);

    return temp;
    }
// overloading <= operator
int operator<=(const stringg &s, const stringg &t){
    int m = strlen(s.p);
    int n = strlen(t.p);
    if(m<=n) return 1;

    else return 0;
}

void show(const stringg &s){
    cout << s.p;
}

int main(){
    stringg s1 = "New ";
    stringg s2 = "York";
    stringg s3 = "Delhi";

    stringg string1,string2,string3;
    string1 = s1;
    string2 = s2;
    string3 = s1 + s3;

    cout << "\nString1 = "; show(string1);
    cout << "\nString2 = "; show(string2);
    cout << "\n";
    cout << "\nString3 = "; show(string3);
    cout << "\n\n";

    if(string1 <= string3){
        show(string1);
        cout << " smaller than ";
        show(string3);
        cout << "\n";
    }else{
        show(string3);
        cout << " smaller than ";
        show(string1);
        cout << "\n";
    }

    return 0;

}
