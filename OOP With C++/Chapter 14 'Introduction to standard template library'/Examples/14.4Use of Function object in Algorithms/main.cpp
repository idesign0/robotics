#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    int x[5]={1,30,14,365,15};
    int y[5]={66,14,36,7,95};

    sort(x,x+5,less<int>());
    sort(y,y+5,less<int>());

    cout << "x : " ;
    for(int i=0;i<5;i++)
        cout << x[i] << "\t";
    cout<<endl;
    cout << "y : " ;
    for(int i=0;i<5;i++)
        cout << y[i] << "\t";
    cout<<endl;
    int z[10];
    merge(x,x+5,y,y+5,z,less<int>());

    cout << "z : " ;
    for(int i=0;i<10;i++)
        cout << z[i] << "\t";
    cout<<endl;
}
