#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("HII");

    string :: iterator p = s1.begin();

    while(*p!=NULL){
        cout << *p;
        p++;
    }

    return 0;
}
