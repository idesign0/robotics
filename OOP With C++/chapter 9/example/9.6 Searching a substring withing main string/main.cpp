#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i,j;
    char str[]="C++ is better than c";
    int len=strlen(str);
    char* subbstr= new char[len];

    cout << "The main string is : "<< str;

    cout << "\n\n Enter substring to be searched : ";cin>>subbstr;

    int k,len2=strlen(subbstr);

    for(i=0;i<len;i++){
        k=i;
        for(j=0;j<len2;j++){
            if(str[k]==subbstr[j]){
                if(j==len2-1){
                    cout << "\nThe substring is present in the main string";
                    break;
                }
                k++;
            }else{
                break;
                }
        }
    }
    if(i==len){
        cout << "\nThe substring is not present in the main string\n\n";
    }

    return 0;
}
