#include<iostream>
using namespace std;

// staff class

class staff{
protected:
    int code;
    string name;
    char* position[10];
public:
    void get_details(){
        cout << "Enter code of Staff member : "; cin >> code;
        cin.ignore();
        cout << "Enter name of Staff member : "; getline(cin,name);
        cout << "Enter position of Staff member : "; cin>>position;
    }
    void show_details(){
        cout << "Code of Staff member : "<<code;
        cout << "Name of Staff member : "<<name;
        cout << "Position of Staff member : "<<position;
    }
};

// officer class

class officer:public staff{
protected:
    char grade;
public:
    void get_details(){
        cout << "Enter Grade of Officer : "; cin >> grade;
    }
    void show_details(){
        cout << "Grade of Officer : " << grade;
        }
};

// teacher class

class teacher:public staff{
protected:
    string subject;
    string publication;
public:
    void get_details(){
        cout << "Enter subject of teacher : "; getline(cin,subject);
        cout << "Enter name of publications : "; getline(cin,publication);
    }
    void show_details(){
        cout << "Enter subject of teacher : "<<subject;
        cout << "Enter name of publications : "<<publication;
    }
};

// typist class

class typist:public staff{
protected:
    int speed;
public:
    void get_details(){
        cout << "Enter the speed of typist : "; cin>>speed;
        }
    void show_details(){
        cout << "Speed of typist : "<<speed;
    }
};

// regular class

class regular:public typist{

};

// casual class

class casual:public typist{
protected:
    float daily_wages;
public:
    void get_details(){
        cout << "Enter daily wages of casual typist: "; cin>>daily_wages;
        }
    void show_details(){
        cout << "Daily wages of typist : "<<daily_wages;
    }
};

class employees{
public:
     void add_details(){

     }

};

int main(){
    casual c;
    c.get_details();
    return 0;
}
