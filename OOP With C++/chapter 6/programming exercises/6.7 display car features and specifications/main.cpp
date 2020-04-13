#include<iostream>
#include<string>
using namespace std;
class car{
    string name;  //name
    string model; // model
    string color;  // color
    int	year;  // year
    int mileage;  // miles on car
	string type;  //Type of vehicle

public:
    car(){};

    car(){
     cin.ignore();
     cout << "Enter Car name : "; getline(cin,name);
     cout << "Enter Car model : "; getline(cin,model);
     cout << "Enter Car color : "; getline(cin,color);
     cout << "Enter Car year : "; cin>>year;
     cout << "Enter Car mileage : "; cin>>mileage;
     cout << "Enter Car type : "; getline(cin,type);
    }

    void show_details();

};
int main(){


    return 0;
}
