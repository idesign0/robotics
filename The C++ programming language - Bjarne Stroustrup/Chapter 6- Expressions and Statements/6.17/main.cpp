#include<iostream>
#include<cctype>
using namespace std;

int atoi_(const char *s){

    // assumption : character constant notation means , accepting 'a' and returning its numeric value
    if(s[0]=='\''&&s[1]&&s[2]=='\'') return s[1];

    // accepting string and returning int value
    int num=0;
    int base=10;

    // null termination guards against reading past the end
    if(s[0]=='0'){
        base=8;
        if(s[1]=='x'){
            s+=2;
            base=16;
        }
    }

    char c;
    while((c = *s++) && // check for end of string
          (isdigit(c) && (c-'0'<=base))|| // check if number is digit
          ((c=toupper(c))&&base>10&&(c >='A')&&(c<='A'+(base-10)))) // check element is letter
    {
        num*=base;
        num += (isalpha(c))? (c-'A'+10) : c - '0';
    }
    return num;
}

int main(int argc, char* argv[])
{
    if(argc<2) return -1;

    int i = atoi_(argv[1]);
    cout << i << endl;
}
