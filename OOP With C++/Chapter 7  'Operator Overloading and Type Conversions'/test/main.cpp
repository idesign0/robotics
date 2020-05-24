#include<iostream>
using namespace std;
class hrs{
public:
    int minutes;
    int hours;
    hrs(){
    }
    hrs(int time){
    hours = time/60;
    minutes = time%60;
    }
};
int main(){
    hrs o_hr;
    int time=180;

    o_hr = time;

    cout << o_hr.hours << "\t" << o_hr.minutes;
    return 0;
}
