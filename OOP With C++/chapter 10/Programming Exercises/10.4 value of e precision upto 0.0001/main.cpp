#include<iostream>
#include<iomanip>
using namespace std;

ostream & iosettings(ostream & output){
    output<<setprecision(4)<<setiosflags(ios::fixed);
    return output;
}

int factorial(int a){
    if(a<=1){
        return 1;
    }else{
        return a*factorial(a-1);
    }
}

int main(){
    float e=0;

    for(int i=0;i<=30;i++){
        float a = 1.0/factorial(i);
        e += a;
    }
    cout <<iosettings<<e;
    return 0;
}
