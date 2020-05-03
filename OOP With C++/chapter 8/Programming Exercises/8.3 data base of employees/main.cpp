#include<iostream>
using namespace std;

// staff class

class staff{
protected:
    int code;
    string name;
    enum position{officer=1,teacher,regular,casual};
    int choice;
public:
    void get_details(){
        cout << "Enter code of Staff member : "; cin >> code;
        cin.ignore();
        cout << "Enter name of Staff member : "; getline(cin,name);
        cout << "Enter position of Staff member Enter option between 1 to 4\n(1)officer (2)Teacher (3)Regular (4)Casual) : "; cin>>choice;
    }
    void show_details(){
        cout << "Code of Staff member : "<<code<<endl;
        cout << "Name of Staff member : "<<name<<endl;
    }
    friend int searchh(string &,int);
};

int searchh(string &a,int b){

}

// officer class

class officer:virtual public staff{
protected:
    char grade;
public:
    void get_details(){
        cout << "Enter Grade of Officer : "; cin >> grade;
    }
    void show_details(){
        cout << "Grade of Officer : " << grade<<endl;
        }
};

// teacher class

class teacher:virtual public staff{
protected:
    string subject;
    string publication;
public:
    void get_details(){
        cin.ignore();
        cout << "Enter subject of teacher : "; getline(cin,subject);
        cout << "Enter name of publications : "; getline(cin,publication);
    }
    void show_details(){
        cout << "Subject of teacher : "<<subject<<endl;
        cout << "Name of publications : "<<publication<<endl;
    }
};

// typist class

class typist:virtual public staff{
protected:
    int speed;
public:
    void get_details(){
        cout << "Enter the speed of typist (words per sec): "; cin>>speed;
        }
    void show_details(){
        cout << "Speed of typist : "<<speed<< " words per sec"<<endl;
    }
};

// regular class

class regular:virtual public typist{
    public:
    void get_details(){
        typist::get_details();
    }
    void show_details(){
      typist::show_details();
    }
};

// casual class

class casual:virtual public typist{
protected:
    float daily_wages;
public:
    void get_details(){
        typist::get_details();
        cout << "Enter daily wages of casual typist (dollars per day): "; cin>>daily_wages;

        }
    void show_details(){
        typist::show_details();
        cout << "Daily wages of typist : "<<daily_wages<<" dollars per day"<<endl;
    }
};

class employees:public teacher,public regular,public casual,public officer{
public:
     void get_details(){
        cout << "\nAdd details of Employee : \n\n";
        staff::get_details();
        switch(choice){
            case 1 : officer::get_details();break;

            case 2 : teacher::get_details();break;

            case 3 : regular::get_details();break;

            case 4 : casual::get_details();break;

        }
     }

    void show_details(){
        cout << "\nshow details of Employee : \n\n";
        staff::show_details();
        switch(choice){
            case 1 : officer::show_details();break;

            case 2 : teacher::show_details();break;

            case 3 : regular::show_details();break;

            case 4 : casual::show_details();break;

        }
     }

};

int main(){
    employees *emp1;
    bool value = true;
    while(value){
        emp1 = new employees[members];
        int option,members=0;
        string name;int account_number;
        cout << "Menu : \n\n"
             << "\n1.Add details of employees"
             << "\n2.Show details of employees"
             << "\n3.Quite"
             << "\nYour option : ";cin>>option;

         switch(option){
            case 1 : emp1[members].get_details();
                     members++;break;
            case 2 : cin.ignore();
                     cout << "Enter name of the Employee : "; getline(cin,name);
                     cout << "Enter a/c number of the Employee : "; cin>>account_number;
         }

    }
    return 0;
}
