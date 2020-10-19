#include<iostream>
#include<cctype>

using namespace std;

void rev(char * c){
    char *end_ptr = c;
    while(*end_ptr)end_ptr++;

    end_ptr = end_ptr -1;

    while(end_ptr>c){
        char ch = *c;
        *c = *end_ptr;
        *end_ptr = ch;
        --end_ptr;
        ++c;
    }
}

char * itoa(int i,char result[], int base){
    if(!base)base =10;

    int idx=0;
    do{
        int digit = i%base;
        result[idx++] = (digit>10)? ('A'+ digit -10) : ('0'+digit);
        i /= base;
    }while(i>0);
    result[idx]=0;
    rev(result);
    return result;
}

int main(){
    char b[255];
    cout <<"Base 10 : "<<itoa(15,b,10)<<endl;
    cout <<"Base 16 : "<<"0x"<<itoa(15,b,16)<<endl;
    cout <<"Base 8 : "<<itoa(15,b,8)<<endl;
    cout <<"Base 2 : "<<itoa(15,b,2)<<endl;
    return 0;
}
