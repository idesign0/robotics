#include<iostream>
#include<string>

using namespace std;

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
    car(string,string,string,string,int,float);
    void listof_names();
    void show_details();
    void update_details();
    int searchh(string,string);

};
    car::car(string n,string m,string c,string t,int y,float mi){
     name=n;
     model=m;
     color=c;
     type=t;
     year=y;
     mileage=mi;
}
void car::show_details(){
     cout << "\nEnter Car name : "; cout << name;
     cout << "\nEnter Car model : "; cout << model;
     cout << "\nEnter Car color : "; cout << color;
     cout << "\nEnter Car type : "; cout << type;

     cout << "\nEnter Car year : "; cout<<year;
     cout << "\nEnter Car mileage : "; cout<<mileage;
}
void car::listof_names(){
    cout << name << "\t\t" << model << endl;
}
void car::update_details(){
 cin.ignore();
 cout << "\nEnter Car name : "; getline(cin,name);
 cout << "Enter Car model : "; getline(cin,model);
 cout << "Enter Car color : "; getline(cin,color);
 cout << "Enter Car type : "; getline(cin,type);

 cout << "Enter Car year : "; cin>>year;
 cout << "Enter Car mileage : "; cin>>mileage;
}
int car::searchh(string car_name,string car_model){
    if(name.compare(car_name)==0 && model.compare(car_model)==0){
        return 1;
    }
    else
        return 0;

}
int main(){
    int sizee=0,i=0;
    string car_name,car_model;
    car *o_car[sizee];
    while(1){
    int option;

    string name;
    string model;
    string color;
    string type;
    int year;
    float mileage;

        cout << "\n1. Enter new Car details"
             << "\n2. List the names of Cars"
             << "\n3. Show Details of particular Car"
             << "\n4. Update Details of particular Car"
             << "\nChoose appropriate option : "; cin>>option;

        switch(option){
            case 1 :
                     cin.ignore();
                     cout << "\nEnter Car name : "; getline(cin,name);
                     cout << "Enter Car model : "; getline(cin,model);
                     cout << "Enter Car color : "; getline(cin,color);
                     cout << "Enter Car type : "; getline(cin,type);

                     cout << "Enter Car year : "; cin>>year;
                     cout << "Enter Car mileage : "; cin>>mileage;

                     o_car[sizee]= new car(name,model,color,type,year,mileage);
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

            case 3 : cin.ignore();
                     cout << "\nEnter car name : ";getline(cin,car_name);
                     cout << "Enter car model name : ";getline(cin,car_model);
                     cout << endl;
                    for(i=0;i<sizee;i++){
                     if(o_car[i]->searchh(car_name,car_model)){
                        o_car[i]->show_details();
                        break;
                    }
                     }
                    cout << "\n";
                    if(i==sizee){
                        cout << "There is no details of car in list";
                    }break;
            case 4 : cin.ignore();
                     cout << "\nEnter car name : ";getline(cin,car_name);
                     cout << "Enter car model name : ";getline(cin,car_model);
                     cout << endl;
                    for(i=0;i<sizee;i++){
                     if(o_car[i]->searchh(car_name,car_model)){
                        o_car[i]->update_details();
                        break;
                    }
                     }
                    cout << "\n";
                    if(i==sizee){
                        cout << "There is no details of car in list";
                    }break;


        }

    }
    delete []o_car;
    return 0;
}
