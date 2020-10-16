#include<iostream>

using namespace std;

int strlen(const char* s){
    int len = 0;
    while(*s++){len++;}
    return len;
}

char * cat(const char* s1,const char* s2){
    char *result_s = new char[strlen(s1)+strlen(s2)+1];
    int i=0;
    while(*s1){
        result_s[i++]=*s1++;
    }
    while(result_s[i++]=*s2++);
    return result_s;
}

int main(){
    char * c = cat("Hii ","How are you !");
    cout << c << endl ;
    return 0;
}
