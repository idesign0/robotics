#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float i;

    cout.precision(5);
    cout.setf(ios::showpoint);

    for(i=0.25;i<=1.0;i+=0.25){
        cout.width(7);
        cout << i;
        cout.width(10);
        cout<<i*i<<"\n";
    }
    cout<<setw(10)<<"TOTAL = "<<setiosflags(ios::fixed)<<setw(10)<<setprecision(2)<<1234.56<<endl;
    char ch;
    char c;
    c=cin.get(ch).get();

    cout << ch <<" "<<c<< endl;
    cout<<setw(12)<<setiosflags(ios::left | ios::showpos) << 15;
    return 0;
}
