#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float pi=22.0/7.0;
    for(int i=21;i>=1;i--){
        cout.precision(i);
        cout.width(i);

        cout <<setiosflags(ios::fixed)<<pi<<endl;
    }
    return 0;
}
