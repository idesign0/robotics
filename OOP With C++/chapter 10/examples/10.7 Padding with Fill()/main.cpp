#include<iostream>
using namespace std;

int main(){
    cout.fill('<');
    cout.precision(4);

    for(int i=1;i<=6;i++){
        cout.width(5);
        cout << i;
        cout.width(10);
        cout << 1.0/(float)i << "\n";
        if(i==3){cout.fill('>');}
    }
    cout <<"\nPadding changed \n\n";
    cout.fill('*');
    cout.width(15);
    cout<<12.345678<<endl;
    return 0;
}
