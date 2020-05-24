#include<iostream>
#include<cmath>
using namespace std;

class time{
    int hours,minute;
public:
    void gettime(int h,int m)
    {
    hours=h;
    minute=m;
    }

    void puttime(void){
    cout<<hours<<" hours and "<<minute<<" minutes"<<endl;
    }

    void sum(time,time);
};
void time::sum(time t1,time t2){
        minute=t1.minute+t1.minute;
        hours=minute/60;
        minute=minute%60;
        hours=hours+t1.hours+t2.hours;
}

int main(){
    time T1,T2,T3;

    T1.gettime(2,45);
    T2.gettime(3,30);

    T3.sum(T1,T2);

    cout << "T1 is = ";T1.puttime();
    cout << "T2 is = ";T2.puttime();
    cout << "T3 is = ";T3.puttime();
}
