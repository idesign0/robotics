/*
UNITS CARGED
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int unitsconsumed(int);
float conditionfun(int);
void displayfun();

int i = 1;
int n = 20;

int * units = new int[500] ; // arrays of units of users
float * cost =  new float[500]; // cost per user

int main(){
    srand(time(0));

        cout << setw(15) << "Users"<< setw(20) <<"Units Consumed"<< setw(20) << "Bill" << endl ;

    for(i;i<=n;i++){
            *(units+i)=rand()%355+1;
            unitsconsumed(*(units+i));
    }

}

int unitsconsumed(int u){
    *(cost+i) = conditionfun(u);
    (*(cost+i)>300) ? *(cost+i) *= 1.15 : *(cost+i);
//printing




    cout << setw(15) << "User "<< i<< setw(20) <<*(units + i)<< setw(20) <<*(cost+i)<< endl;


    delete []cost;
    delete []units;
}

float conditionfun(int u){
    if(u>300){
        float chargeabove300 = (u-300)*0.90;
        float chargenext200 = (200)*0.80;
        float chargeupto100 = (100)*0.60;

        float totalcharge = chargeupto100 + chargenext200 + chargeabove300;
        return totalcharge;
    }
    else if(u>200){

        float chargenext200 = (u-100)*0.80;
        float chargeupto100 = (100)*0.60;

        float totalcharge = chargeupto100 + chargenext200;
        return totalcharge;
    }
    else if(u>0){
        float chargeupto100 = (u)*0.60;

        float totalcharge = chargeupto100;
        return (totalcharge>50) ? totalcharge : 50;
    }

}

