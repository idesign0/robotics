#include<iostream>
using namespace std;

class cars{
protected:
    string name;
    int code;
    int choices;
    enum car{twos=1,threes,fours};
public:
    void get_details(){
        cin.ignore();
        cout << "Enter name of the Model : ";getline(cin,name);
        cout << "Enter code of the Vehicle model : ";cin>>code;
        cout << "\nEnter type of the Vehicle model :\n"
             << "1.Two wheeler\n"
             << "2.Three wheeler\n"
             << "3.Four wheeler\n"
             << "\nChoose Appropriate option : ";cin>>choices;
    }

    void show_details(){
        cout << "Name of the Model : " << name << endl;
        cout << "Code of the Model : " << code << endl;
    }

};
class manual{
    protected:
    string engine_type;
    string gear;
public:
    manual(){
    engine_type="Petrol engine";
    gear="manual gear transmission";
    }
    void show_details(){
        cout << "Engine type : "<<engine_type<<endl;
        cout << "Gear type : "<<gear<<endl;
    }
};

class automatic{
    protected:
    string engine_type;
    string gear;
public:
    automatic(){
    string engine_type="Petrol engine";
    string gear="Automatic gear transmission";
    }
    void show_details(){
        cout << "Engine type : "<<engine_type<<endl;
        cout << "Gear type : "<<gear<<endl;
    }
};

class electric{
    protected:
    string engine_type;
    string gear;
public:
    electric(){
    engine_type="Electric engine";
    gear="Automatic gear transmission";
    }
    void show_details(){
        cout << "Engine type : "<<engine_type<<endl;
        cout << "Gear type : "<<gear<<endl;
    }
};

class two:public virtual cars,public manual,public electric,public automatic{
protected:
    string tyre;
    float power;
    float weight;
    enum type_ENUM{manuals=1,electrics,automatics};
    int choice_type;
    string type;

    void get_details(){
        cout << "\n****************************************************************\n";

        cout << "\nGet Details about Two wheelers : \n";

        cout << "Power developed by two wheeler engine : ";cin>>power;cin.ignore();
        cout << "Tyre type of two wheeler engine : ";getline(cin,tyre);
        cout << "Weight : ";cin>>weight;
        cout << "\nOperating Type of Vehicle : \n"
             << "1.Manual\n"
             << "2.Electric\n"
             << "3.Automatic\n"
             << "\nChoose appropriate options : "; cin >> choice_type;

             switch(choice_type){
                case manuals : type="manual";break;
                case electrics : type="electric" ;break;
                case automatics : type="automatic" ;break;
                default : cout << "Invalid type !";
             }
cout << "\n****************************************************************\n";
             }
    void show_details(){
        cout << "\n****************************************************************\n";
        cout << "\nDetails about Two wheelers : \n";
        cout << "Power developed by two wheeler engine : "<<power<<endl;
        cout << "Tyre type of two wheeler engine : "<<tyre<<endl;
        cout << "Weight : "<<weight<<endl;
        cout << "Vehicle Type : "<<type<<endl;

            switch(choice_type){
                case manuals : manual::show_details();break;
                case electrics : electric::show_details();break;
                case automatics : automatic::show_details() ;break;
             }
cout << "\n****************************************************************\n";
    }
};

class three:public virtual cars,public manual,public electric,public automatic{
 protected:
    string brand;
    string clutch_type;
    float fuel_capacity;
    enum type_ENUM{manuals=1,electrics,automatics};
    int choice_type;
    string type;

    void get_details(){
        cout << "\n****************************************************************\n";
        cout << "\nGive Details about Three wheelers : \n";
        cin.ignore();
        cout << "Brand of three wheeler engine : ";getline(cin,brand);
        cout << "Clutch type : ";getline(cin,clutch_type);
        cout << "Fuel capacity : ";cin>>fuel_capacity;
        cout << "\nOperating Type of Vehicle : \n"
             << "1.Manual\n"
             << "2.Electric\n"
             << "3.Automatic\n"
             << "\nChoose appropriate options : "; cin >> choice_type;

             switch(choice_type){
                case manuals : type="manual";break;
                case electrics : type="electric" ;break;
                case automatics : type="automatic" ;break;
                default : cout << "Invalid type !";\
             }
cout << "\n****************************************************************\n";
             }
    void show_details(){
        cout << "\n****************************************************************\n";
        cout << "\nDetails about Three wheelers : \n";
        cout << "Brand of three wheeler engine : "<<brand<<endl;
        cout << "Clutch type : "<<clutch_type<<endl;
        cout << "Fuel capacity : "<<fuel_capacity<<endl;
        cout << "Vehicle Type : "<<type<<endl;

            switch(choice_type){
                case manuals : manual::show_details();break;
                case electrics : electric::show_details();break;
                case automatics :automatic::show_details() ;break;
             }
             cout << "\n****************************************************************\n";
    }
};

class four:public virtual cars,public automatic{
 protected:
    string vehicle_model;
    string car_type;
    string seating_capacity;
    string color;
    float maximum_speed;
    enum type_ENUM{manuals=1,electrics,automatics};
    int choice_type;
    string type;

    void get_details(){
        cout << "\nGive Details about Four wheelers : \n";
        cin.ignore();
        cout << "Vehicle model : ";getline(cin,vehicle_model);
        cout << "Car type : ";getline(cin,car_type);
        cout << "Seating capacity : ";getline(cin,seating_capacity);
        cout << "Color : ";getline(cin,color);
        cout << "Maximum Speed : ";cin>>maximum_speed;
        type="automatic";


             }
    void show_details(){
        cout << "\n****************************************************************\n";
        cout << "\nDetails about Four wheelers : \n";

        cout << "Vehicle model : "<<vehicle_model<<endl;
        cout << "Car type : "<<car_type<<endl;
        cout << "Seating capacity : "<<seating_capacity<<endl;
        cout << "Color : "<<color<<endl;
        cout << "Maximum Speed : "<<maximum_speed<<endl;

        automatic::show_details();
        cout << "\n****************************************************************\n";
    }
};

class products:public two,public three,public four{
public:
    void get_details(){
        cars::get_details();
        switch(choices){
            case twos : two::get_details(); break;
            case threes : three::get_details(); break;
            case fours : four::get_details(); break;
            default : cout <<"Invalid choice !";
        }

    }
    void show_details(){
        switch(choices){
            case twos : two::show_details(); break;
            case threes : three::show_details(); break;
            case fours : four::show_details(); break;
        }
    }

    int searchh(string a,int b){
        if(a.compare(name)==0&&b==code){
            return 1;
        }else{
            return 0;
        }
    }

};

int main(){
    products o_cars[30];
    bool value = true;
    int member=0;
    while(value){

        int option,i=0;
        string name;int code_number;
        cout << "Menu : \n"
             << "\n1.Add details of employees"
             << "\n2.Show details of employees"
             << "\n3.Quite"
             << "\nYour option : ";cin>>option;

         switch(option){
            case 1 :  cout << "\n****************************************************************\n";
                     o_cars[member].get_details();
                     cout << "\n****************************************************************\n";
                     member++;break;

            case 2 : cin.ignore();
                     cout << "Enter name of the vehicle : "; getline(cin,name);
                     cout << "Enter code number of vehicle : "; cin>>code_number;

                     for(i=0;i<member;i++){
                        if(o_cars[i].searchh(name,code_number)==1){
                            cout << "\n****************************************************************\n";
                            o_cars[i].show_details();
                            cout << "\n****************************************************************\n";
                            break;
                        }
                     }
                     if(i==member){"employees are not listed\n";}break;

            case 3 : value = false;
         }

    }
    return 0;
}


