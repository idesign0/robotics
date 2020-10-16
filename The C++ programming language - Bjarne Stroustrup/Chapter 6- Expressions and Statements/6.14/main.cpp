#include<iostream>

using namespace std;

void rev(char * s){
    char * end_ptr=s;
    while(*end_ptr)end_ptr++;

    // end_ptr will be on Null pointer
    // move pointer to last element
    end_ptr=end_ptr-1;

    while(end_ptr>s){
        char c = *s;
        *s=*end_ptr;
        *end_ptr=c;
        ++s, --end_ptr;
    }
}


int main(int argc,char *argv[]){
    if(argc<2) return -1;
    rev(argv[1]);
    rev(argv[2]);
    cout <<argv[1] << endl ;
    cout <<argv[2] << endl ;
    return 0;
}
