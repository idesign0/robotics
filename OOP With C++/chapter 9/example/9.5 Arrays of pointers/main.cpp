#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int i=0;
    char *ptr[10]={
    "books",
    "television",
    "computer",
    "sports",
    };

    char str[25];
    cout << "\n\nEnter your perfect pursuit : ";
    cin>>str;

    for(i=0;i<4;i++){
        if(!strcmp(ptr[i],str)){
            cout << "\n\nYour favorite pursuit is available is here !"<<endl;break;
        }
    }
    if(i==4){
        cout << "\n\nYour favorite not available !\n\n";
    }

    return 0;
}
