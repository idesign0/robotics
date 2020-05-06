#include<iostream>
using namespace std;

class cars{
    string name;
    int code;
    int choices;
    enum car{two=1,three,four};
public:
    void get_details(){
        cin.ignore();
        cout << "Enter name of the Model : ";getline(cin,name);
        cout << "Enter code of the Vehicle model : ";cin>>code;
        cout << "Enter type of the Vehicle model :\n"
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
    float power;
    float engine;
public:
    void get_details(){

    }
};
class two:public virtual cars,public manual,p{
    string tyre;
    string gear;
    float weight;
    enum type_ENUM{manual=1,electric,automatic};
    int choice_type;
    string type;

    void get_details(){
        cin.ignore();
        cout << "Power developed by two wheeler engine : ";cin>>power;
        cout << "Tyre type of two wheeler engine : ";getline(cin,tyre);
        cout << "Gear : ";getline(cin,gear);
        cout << "Weight : ";cin>>weight;
        cout << "Operating Type of Vehicle : \n"
             << "1.Manual\n"
             << "2.Electric\n"
             << "3.Automatic\n"
             << "\nChoose appropriate options : "; cin >> choices;

             switch(choice_type){
                case manual : type="manual";
                              m;break;
                case electric : type="electric" ;break;
                case automatic : type="automatic" ;break;
             }

             }
    void show_details(){
        cout << "Power developed by two wheeler engine : "<<power<<endl;
        cout << "Tyre type of two wheeler engine : ";<<tyre<<endl;
        cout << "Gear : "<<gear<<endl;
        cout << "Weight : "<<weight<<endl;
        cout << "Type : "<<type<<endl;
    }
};

int main(){

    return 0;
}
