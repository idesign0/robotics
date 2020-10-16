#include<iostream>

using namespace std;

/*
for strlen function input(argument) will be (const char *) or (const char []), and output(return type) will be integer.
*/
int strlen(const char* s){
    int len = 0;
    while(*s++){len++;}
    return len;
}

/*
for strcpy function input(argument) will be (const char *)(from) and (char *)(to), and output(return type) will be void.
*/
void strcpy(const char* from,char *to){
    while(*to++=*from++);
}

/*
for strcmp function input(argument) will be (const char *) and (const char *) and output(return type) will be bool.
*/

int strcmp(const char* s1,const char *s2){
    while(*s1 && *s2){
        if(int d = *s1++ - *s2++){
            return d;
        }
    }
    return *s1-*s2;
}

int main(){
    const char* str = "Hello world !";
    cout << "Length of String : " << strlen(str) << endl;

    char* cpy_str;
    strcpy(str,cpy_str);
    cout <<"Copied String : "<<cpy_str << endl;

    cout << strcmp("hii","hello") << endl;
    cout << strcmp("yo","yo") << endl;
    cout << strcmp("","hello") << endl;
    cout << strcmp("hii","") << endl;
}
