#include<iostream>
#include<string>
using namespace std;

int main(){
    int i,j;
    char str[]="C++ is better than c";
    int len=strlen(str);
    char* subbstr= new char[len];

    cout << "\n\n Enter substring to be searched : ";cin>>subbstr;

    int k,len2=strlen(subbstr);


    cout << "The main string is : "<< str;
    return 0;
}
