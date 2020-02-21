#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int sum(int a,int b){
    int s = a+b;
    cout << s << endl;
}
int sum(int a,int b,int c){
    int s = a+b+c;
    cout << s << endl;
}
int sum(int a,int b,int c,int d){
    int s = a+b+c+d;
    cout << s << endl;
}
int sum(int a[],int n){
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    cout << sum << endl;
}

