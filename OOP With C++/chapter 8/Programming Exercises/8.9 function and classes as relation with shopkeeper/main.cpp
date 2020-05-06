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

class two::public virtual cars{
    float power;
    string tyre;
    string gear;
    float weight;
    void get_details(){
        cin.ignore();
        cout << "Power developed by two wheeler engine : ";cin>>power;
        cout << "Tyre type of two wheeler engine : ";getline(cin,tyre);
        cout << "Gear : ";getline(cin,gear);
        cout << "Weight : ";cin>>weight;
    }
    void show_details(){
        cout << "Power developed by two wheeler engine : "<<power<<endl;
        cout << "Tyre type of two wheeler engine : ";<<tyre<<endl;
        cout << "Gear : "<<gear<<endl;
        cout << "Weight : "<<weight<<endl;
    }
};

int main(){

    return 0;
}
