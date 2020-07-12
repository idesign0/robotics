#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>

using namespace std;

//forward declarations of the classes
class pay_slip;
class permanent_employee;
class contractual_employee;

//Function Prototype
int get_da_rate();
int get_hra_rate();
int get_ma();
int get_ptax();
int get_emp_no();
int search(int,permanent_employee *);
int search(int,contractual_employee *);
void generate_pay_slip(permanent_employee);
void generate_pay_slip(contractual_employee);
void compute_OT();

class employee{ // base class
        int emp_no;
        char emp_name[40];
        char emp_add[80];
        char emp_desg[20];
        char emp_dept[20];

    public:
        void getdata();
        void displaydata();
}; //end of base class definitions

void employee::getdata(){
    emp_no= get_emp_no();
    cout << "\nEnter the name of the employee : ";
    cin.getline(emp_name,40);
    cout << "\nEnter the Address of the employee : ";
    cin.getline(emp_add,80);
    cout << "\nEnter the designation of the employee : ";
    cin.getline(emp_desg,20);
    cout << "\nEnter the Department of the employee : ";
    cin.getline(emp_dept,20);
}

void employee::displaydata(){
    cout << "\nEmp. No. : "<< emp_no;
    cout << "\nName : "<< emp_name;
    cout << "\nAddress : "<< emp_add;
    cout << "\nDesignation : "<< emp_desg;
    cout << "\nDepartment : "<< emp_dept;
}
