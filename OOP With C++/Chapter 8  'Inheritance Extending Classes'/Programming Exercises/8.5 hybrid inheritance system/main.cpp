#include<iostream>
using namespace std;

class person{
protected:
    string name;
    int code;
public:
    void get_details(){
    cin.ignore();
    cout << "Name of Person : ";getline(cin,name);
    cout << "Enter code : "; cin >>code;
    }
    void update_details(){
    cin.ignore();
    cout << "Name of Person : ";getline(cin,name);
    cout << "Enter code : "; cin >>code;
    }
    void show_details(){
    cout << "Name of Person : "<<name<<endl;
    cout << "Enter code : "<< code<<endl;
    }
};

class account:public virtual person{
protected:
    float pay;
public:
    void get_details(){
    cout << "pay of the person : ";cin>> pay;
    }
    void update_details(){
    cout << "pay of the person : ";cin>> pay;
    }
    void show_details(){
    cout << "pay of the person : "<<pay<<endl;
    }
};

class admin:public virtual person{
protected:
    string experience;
public:
    void get_details(){
    person::get_details();
    cin.ignore();
    cout << "Experience : ";getline(cin,experience);
    }
    void update_details(){
    person::update_details();
    cin.ignore();
    cout << "Experience : ";getline(cin,experience);
    }
    void show_details(){
    person::show_details();
    cout << "Experience : "<<experience<<endl;
    }
};

class master:public account,public admin{
public:
    get_details(){
        admin::get_details();
        account::get_details();
    }
    update_details(){
        admin::update_details();
        account::update_details();
    }
    show_details(){
        admin::show_details();
        account::show_details();
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
    master m1[20];
    bool value = true;
    int member=0;
    while(value){

        int option,i=0;
        string name;int code_number;
        cout << "Menu : \n"
             << "\n1.Add details of employees"
             << "\n2.Update details of employees"
             << "\n3.Show details of employees"
             << "\n4.Quite"
             << "\nYour option : ";cin>>option;

         switch(option){
            case 1 : cout << "\n*****************************************************************\n";
                        m1[member].get_details();
                    cout << "\n*****************************************************************\n";
                     member++;break;
            case 2 :
                     cin.ignore();
                     cout << "Enter name of the Employee : "; getline(cin,name);
                     cout << "Enter code number of the Employee : "; cin>>code_number;

                     for(i=0;i<member;i++){
                        if(m1[i].searchh(name,code_number)==1){
                            cout << "\n*****************************************************************\n";
                            m1[i].update_details();
                            cout << "\n*****************************************************************\n";
                            break;
                        }
                     }
                     if(i==member){"employees are not listed\n";}break;
            case 3 :
                     cin.ignore();
                     cout << "Enter name of the Employee : "; getline(cin,name);
                     cout << "Enter code number of the Employee : "; cin>>code_number;

                     for(i=0;i<member;i++){
                        if(m1[i].searchh(name,code_number)==1){
                            cout << "\n*****************************************************************\n";
                            m1[i].show_details();
                            cout << "\n*****************************************************************\n";
                            break;
                        }
                     }
                     if(i==member){"employees are not listed\n";}break;
            case 4 : value = false;

            default : cout << "Invalid Choice"<< endl;
         }

    }
    return 0;
}

