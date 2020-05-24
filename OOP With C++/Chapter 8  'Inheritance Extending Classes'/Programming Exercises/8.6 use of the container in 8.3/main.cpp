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
    int get_choice(){return choice;}
    int get_code(){return code;}
};

// officer class

class officer{
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

class teacher{
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

class typist{
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

class regular{
    public:
    typist o_typist;
    void get_details(){
        o_typist.get_details();
    }
    void show_details(){
        o_typist.show_details();
    }
};

// casual class

class casual{
protected:
    float daily_wages;
public:
    typist o_typist;
    void get_details(){
        o_typist.get_details();
        cout << "Enter daily wages of casual typist (dollars per day): "; cin>>daily_wages;

        }
    void show_details(){
        o_typist.show_details();
        cout << "Daily wages of typist : "<<daily_wages<<" dollars per day"<<endl;
    }
};

class employees{
public:
    staff o_staff;
    officer o_officer;
    teacher o_teacher;
    regular o_regular;
    casual o_casual;

     void get_details(){
        cout << "\nAdd details of Employee : \n\n";

        o_staff.get_details();
        switch(o_staff.get_choice()){

            case 1 : o_officer.get_details();break;

            case 2 : o_teacher.get_details();break;

            case 3 : o_regular.get_details();break;

            case 4 : o_casual.get_details();break;

        }
     }

    void show_details(){
        cout << "\nshow details of Employee : \n\n";
        o_staff.show_details();
        switch(o_staff.get_choice()){
            case 1 : o_officer.show_details();break;

            case 2 : o_teacher.show_details();break;

            case 3 : o_regular.show_details();break;

            case 4 : o_casual.show_details();break;

        }
     }

    int searchh(string a,int b){
    if(b==o_staff.get_code()){
        return 1;

    }else{
        return 0;
    }
}


};

int main(){
    employees emp1[30];
    bool value = true;
    int member=0;
    while(value){

        int option,i=0;
        string name;int code_number;
        cout << "Menu : \n\n"
             << "\n1.Add details of employees"
             << "\n2.Show details of employees"
             << "\n3.Quite"
             << "\nYour option : ";cin>>option;

         switch(option){
            case 1 : emp1[member].get_details();
                     member++;break;
            case 2 :
                     cin.ignore();
                     cout << "Enter name of the Employee : "; getline(cin,name);
                     cout << "Enter code number of the Employee : "; cin>>code_number;

                     for(i=0;i<member;i++){
                        if(emp1[i].searchh(name,code_number)==1){
                            emp1[i].show_details();
                            break;
                        }
                     }
                     if(i==member){"employees are not listed\n";}break;

            case 3 : value = false;
         }

    }
    return 0;
}
