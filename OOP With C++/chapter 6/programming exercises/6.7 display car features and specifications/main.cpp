#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int space = 20;
class car{
    string name;  //name
    string model; // model
    string color;  // color
    int	year;  // year
    float mileage;  // miles on car
	string type;  //Type of vehicle

public:
    car(){
     name=" ";
     model=" ";
     color=" ";
     year=0;
     mileage=0.0;
     type=" ";
    }
    void feed_data();
    void listof_names();
    void show_details();
};
void car::feed_data(){
     cin.ignore();
     cout << "Enter Car name : "; getline(cin,name);
     cout << "Enter Car model : "; getline(cin,model);
     cout << "Enter Car color : "; getline(cin,color);
     cout << "Enter Car type : "; getline(cin,type);

     cout << "Enter Car year : "; cin>>year;
     cout << "Enter Car mileage : "; cin>>mileage;
}
void car::listof_names(){
    cout << name << "\t\t" << model << endl;
}
int main(){
    int sizee=0,i=0;
    car *o_car[sizee];
    while(1){
    int option;
        cout << "\n1. Enter new Car details"
             << "\n2. List the names of Cars"
             << "\n3. Show Details of particular Car"
             << "\n4. Update Details of particular Car"
             << "\nChoose appropriate option : "; cin>>option;

        switch(option){
            case 1 :o_car[sizee]= new car;
                     o_car[sizee]->feed_data();
                     sizee++;
                     break;

            case 2 : cout << "Car details : " << endl;
                     cout << "\nCar name"<<"\t\t"<<"Model"<<endl;
                    for(i=0;i<sizee;i++){
                        o_car[i]->listof_names();
                    }
                    cout << "\n";
                    if(i==sizee){
                        cout << "There is no details of car in list";
                    }break;
        }

    }
    return 0;
}
