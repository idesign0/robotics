#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "hii i am dhruv !";

    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str.replace(i,1,"_");
        }
    }

    cout << str;
    return 0;
}
