#include<iostream>
#include<cctype>
using namespace std;

int atoi_(const char *s){
    int num=0;
    int base=10;

    //short circuit
    if(s[0]=='\''&&s[1]&&s[2]=='\''){
        return s[1];
    }

    //null termination guard for reading past the end
    if(s[0]=='0'){
        base=8;
        if(s[1]=='x'){
            s+=2;
            base=16;
        }
    }

    char c;
    while((c=*s++)&&(isdigit(c)&&(c-'0'<=base)) // must be valid for digit
          ||((c=toupper(c))&&base>10&&c>'A'&&c<'A'+(base-10))) // must be valid for letter
    {
        num*=base;
        num+=isalpha(c)?(c-'A'+10):c-'0';
    }
    return num;
}

int main(int argc, char* argv[])
{
    if (argc < 2)
        return -1;

    int i = atoi_("123");
    cout << i << endl;
}
