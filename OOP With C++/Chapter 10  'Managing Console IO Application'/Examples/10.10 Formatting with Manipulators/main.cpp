#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout.setf(ios::showpoint);
    setfill('.');
    cout<<setw(5)<<"n"<<setw(15)<<"Inverse_of_n"<<setw(20)<<"Sum_of_terms\n\n";

    double terms,sum=0;

    for(int n=1;n<=10;n++){
        terms=1.0/float(n);
        sum=sum+terms;
        cout<<setw(5)<<n<<setw(14)<<setprecision(4)<<setiosflags(ios::fixed)<<terms<<setw(15)<<resetiosflags(ios::scientific)<<sum<<endl;

    }
    return 0;
}
