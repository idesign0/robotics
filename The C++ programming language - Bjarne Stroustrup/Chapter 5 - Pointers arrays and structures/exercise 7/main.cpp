#include<iostream>
#include<string>
using namespace std;

struct calender{
    string months_strc;
    int day_strc;
};

int main(){

    cout << "Using Arrays : \n" << endl;
    char * months[12]={"Jan","Feb","March","April","May","June","July","Aug","Sep","Oct","Nov","Dec"};
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i=0;i<12;i++){
    cout << "Month : " << months[i] << "\tDays : " << days[i] << endl;
    }

    cout <<endl<< "Using Struct : \n" << endl;
    calender cal[12] = {
        {"Jan",31},
        {"Feb",28},
        {"March",31},
        {"April",30},
        {"May",31},
        {"Jun",30},
        {"July",31},
        {"Aug",31},
        {"Sep",30},
        {"Oct",31},
        {"Nov",30},
        {"Dec",31},
    };

    for(int i=0;i<12;i++){
    cout << "Month : " << cal[i].months_strc << "\tDays : " << cal[i].day_strc << endl;
    }

    return 0;
}
