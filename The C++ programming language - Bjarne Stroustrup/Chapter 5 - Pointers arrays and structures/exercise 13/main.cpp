#include<iostream>
using namespace std;
struct DATE{
    int dd,mm,yy;

    DATE(){}
    DATE(int d,int m,int y){
        dd=d;
        mm=m;
        yy=y;
    }

};

DATE readdate(){
    int d,m,y;
    cin>>d>>m>>y;
    return DATE(d,m,y);
}

void print_date(DATE date){
    cout <<"Date: " <<date.dd << " Month: " << date.mm << " Year: " << date.yy << endl;
}
int main(){
    DATE date(10,9,2015);
    DATE date1;
    date1= readdate();

    print_date(date1);
    print_date(date);
    return 0;
}
