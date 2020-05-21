#include<iostream>
using namespace std;

int main(){
    float pi =22.0/7.0;
    int i;
    cout << "Value of PI : \n";
    for(int i=0;i<=10;i++){
        cout.width(i);
        cout.precision(i+1);
        cout<<pi<<"\n";
    }
    return 0;
}
