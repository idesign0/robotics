#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class DB;
class DM{
    float metres;
    float centimeters;
public:
    void get_data(int m,int c){
        metres = m;
        centimeters = c;
    }
    void put_data(){
        cout << metres <<" Meters and "<< centimeters << " centimeters." << endl;
    }

    friend DM addition(DM,DB);
};

class DB{
    float feet;
    float inches;
public:
    void get_data(int f,int i){
        feet = f;
        inches = i;
    }
    void put_data(){
        cout << feet <<" feet and "<< inches << " inches." << endl;
    }

    friend DM addition(DM,DB);
};

DM addition(DM mc, DB fi){
    mc.metres += fi.feet*0.3048;
    mc.centimeters += fi.inches*2.54;

    return mc;
}

int main(){

    DM ometric;
    DB oenglish;

    float meter,centimeter;
    float feet,inches;

    cout << "Enter Distances in meter and centimeter : ";
    cin >> meter >> centimeter ;


    cout << "Enter Distances in feet and inches : ";
    cin >> feet >> inches ;


    ometric.get_data(meter,centimeter);
    oenglish.get_data(feet,inches);

    cout << " Dimensions in Metric : " ; ometric.put_data();

    cout << " Dimensions in English : " ; oenglish.put_data();

    DM oaddition;

    oaddition = addition(ometric,oenglish);

    cout << " Dimensions in Metric (After addition) : " ; oaddition.put_data();

    return 0;
    }
