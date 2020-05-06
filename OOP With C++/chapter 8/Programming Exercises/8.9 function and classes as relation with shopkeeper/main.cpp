#include<iostream>
using namespace std;

class cars{
    string name;
    int code;
    int choices;
    enum car{two=1,three,four};
public:
    cars(){
        cin.ignore();
        cout << "Enter name of the Model : ";getline(cin,name);
        cout << "Enter code of the Vehicle model : ";cin>>code;
        cout << "Enter type of the Vehicle model :\n"
             << "1.Two wheeler\n"
             << "2.Three wheeler\n"
             << "3.Four wheeler\n"
             << "\nChoose Appropriate option : ";cin>>choices;
    }
};

int main(){

    return 0;
}
