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
    protected:
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

class permanent_employee : public employee { // derived from base class
private:
    char emp_type[10];
    long emp_basic;
    long emp_da;
    long emp_hra;
    int emp_ma;
    long emp_pf;
    int ptax;
    int itax;
    long gross;
    long net;
public:
    void getdata(); // over ridden function
    void displaydata(); // over ridden function
    void calculate();
    void store_in_file();
    friend int search(int,permanent_employee *);
    friend void generate_pay_slip(permanent_employee);
    friend void compute_OT();
};

void permanent_employee::getdata(){
    employee::getdata();//calling base getdata()
    try{ // exception handling for negative basic
        cout << "\nEnter the basic salary : ";
        cin >> emp_basic;
        if(emp_basic<0){
            throw emp_basic;
        }
    }catch(...){
        cout << "\nBasic should be Positive. ";
        return;
    }
    try{ // exception handling for negative income tax
        cout << "\nEnter the income tax to be deducted : ";
        cin >> itax;
        if(itax<0){
            throw itax;
        }
    }catch(...){
        cout << "\nIncome tax to be Positive.";
        return;
    }

    calculate();
}

void permanent_employee::calculate(){
    int da,hra;
    strcpy(emp_type,"permanent");
    da = get_da_rate();
    emp_da = emp_basic * (da/100); // da is calculated as permanent basis
    hra = get_hra_rate();
    hra = emp_basic * (hra/100); // hra is calculated as permanent basis

    emp_ma = get_ma();
    emp_pf = (emp_basic + emp_da) * (0.12);//pf is calculated as a percentage of basic+da

    ptax= get_ptax();
    gross = emp_basic + emp_da + emp_hra + emp_ma; // calc. of gros

    net= gross-ptax-itax-emp_pf; // calc of net
}

void permanent_employee::displaydata(){
    employee::displaydata(); // calling base display data
    cout << "\nEmployee type : "<< emp_type;
    cout << "\nBasic : "<< emp_basic;
    cout << "\nDearness Allowance : "<< emp_da;
    cout << "\nHRA : "<< emp_hra;
    cout << "\nMedical allowance : "<< emp_ma;
    cout << "\nPF : "<< emp_pf;
    cout << "\nProfessional Tax : "<< ptax;
    cout << "\nIncome tax : "<< itax;
    cout << "\nGross salary : "<< gross;
    cout << "\nNet salary : "<< net;
}

void permanent_employee::store_in_file(){
    ofstream outfile;
    outfile.open("per_empf.txt", ios::app); // open per_emp in in append mode
    // stores details of permanent employees
    outfile << emp_no << "\n";
    outfile << emp_name << "\n" << emp_add << "\n" <<emp_desg< "\n";
    outfile << emp_dept << "\n" << emp_type << "\n" << emp_basic << "\n"
            << emp_da << "\n" << emp_hra << "\n" << emp_ma << "\n" <<emp_pf << "\n"
            << ptax << "\n" << itax << "\n" << gross << "\n" << net << "\n" ;
    outfile.close(); // close file
}

class contractual_employee : public employee{
private:
    char emp_type[12];
    long gross;
    int ptax;
    int itax;
    long net;
public:
    void getdata();
    void displaydata();
    void calculate();
    void store_in_file();
    friend int search(int, contractual_employee *);
    friend void generate_pay_slip(contractual_employee);
    friend void compute_OT();
};

void contractual_employee::getdata(){ //over-ridden function getdata
    employee::getdata();
    try{ // exception for negative gross
        cout << "\nEnter the gross salary : ";
        cin >> gross;
        if(gross < 0){
            throw gross;
        }
    }catch(...){
        cout << "\nGross salary should be positive.";
        return;
    }
    try{ // exception for negative income tax
        cout << "\nEnter the income tax salary : ";
        cin >> itax;
        if(itax < 0){
            throw itax;
        }
    }catch(...){
        cout << "\nGross Income tax salary should be positive.";
        return;
    }
    calculate();
}

void contractual_employee ::calculate(){
    strcpy(emp_type,"Contractual");
    ptax=get_ptax();
    net = gross - ptax - itax;
}

void contractual_employee::displaydata(){ //over-ridden displaydata()
    employee::displaydata();//calling base displaydata
    cout << "\nEmployee Type : " << emp_type;
    cout << "\nGross salary : "<< gross;
    cout << "\nProfessional Tax : "<< ptax;
    cout << "\nIncome tax : "<< itax;
    cout << "\nNet salary : "<< net;
}

void contractual_employee::store_in_file(){
    ofstream outfile;
    outfile.open("con_empf.txt", ios::app); // open con_emp in in append mode
    // stores details of contractual employees
    outfile << emp_no << "\n";
    outfile << emp_name << "\n" << emp_add << "\n" <<emp_desg< "\n";
    outfile << emp_dept << "\n" << emp_type << "\n" << gross << "\n"
            << ptax << "\n" << itax << "\n" << net << "\n" ;
    outfile.close(); // close file
}

int search(int no,permanent_employee *per){ ////func. defn. for searching permanent employees from file
    ifstream infile;
    permanent_employee p;

    char ch;
    infile.open("per_empf.txt");// open file in read mode
    if(!infile.fail()){ // checking if file exits
        while(infile){
            infile>>p.emp_no;
            infile.ignore(1000,'\n');
            infile.getline(p.emp_name,40);
            infile.getline(p.emp_add,80);
            infile.getline(p.emp_desg,20);
            infile.getline(p.emp_dept,20);
            infile >> p.emp_type >> p.emp_basic >> p.emp_da
                   >> p.emp_hra >> p.emp_ma >> p.emp_pf >> p.ptax >> p.itax >> p.gross >>p.net;

            if(no==p.emp_no){ //looks for a match
                *per = p; // set pointer to function if found
                return 1;
            }
        }
    }
    return 0 ; // returns false if not found

}

int search(int no,contractual_employee *con){ ////func. defn. for searching contractual employees from file
    ifstream infile;
    contractual_employee p;

    char ch;
    infile.open("con_empf.txt");// open file in read mode
    if(!infile.fail()){ // checking if file exits
        while(infile){
            infile>>p.emp_no;
            infile.ignore(1000,'\n');
            infile.getline(p.emp_name,40);
            infile.getline(p.emp_add,80);
            infile.getline(p.emp_desg,20);
            infile.getline(p.emp_dept,20);
            infile >> p.emp_type >> p.gross >> p.ptax >> p.itax >> p.net;

            if(no==p.emp_no){ //looks for a match
                *con = p; // set pointer to function if found
                return 1;
            }
        }
    }
    return 0 ; // returns false if not found
}

void generate_pay_slip(permanent_employee per){
    //function to generate pay slip of permanent employees
    int no;
    char f1_name[9], num[8], emp[8], c;

    cout << "\n\nEnter month no (1..12): ";
    cin >> no;
    if(no>12 || no<=0){
        cout << "\n\nInvalid Month number";
        return;
    }
    system("cls");
    cout << ":::::::::::::::Pay Slip For Month Number " << no << ":::::::::::::::";
    per.calculate(); //perform calculation;
    per.displaydata(); // display data about employee

    // create file name to store pay slip of employee by concatenating employee no. with
    // month no. with an underscore character in between

    sprintf(num,"%d_",no);
    sprintf(emp,"%d_",per.emp_no);
    strcpy(f1_name,num);
    strcat(f1_name,emp);
    f1_name[strlen(num)+strlen(emp)]='\0';
    ofstream outfile(f1_name);

    //store pay slip in file

    outfile << ":::::::::::::::Pay Slip For Month Number "<<no<<":::::::::::::::\n\n";
    outfile << "Emp. Number          : " <<per.emp_no <<"\n";
    outfile << "Emp. Name            : " <<per.emp_name <<"\n";
    outfile << "Emp. Add             : " <<per.emp_add <<"\n";
    outfile << "Emp. Designation     : " <<per.emp_desg <<"\n";
    outfile << "Emp. Department      : " <<per.emp_dept <<"\n";
    outfile << "Emp. Type            : " <<per.emp_type <<"\n";
    outfile << "Emp. Basic           : " <<per.emp_basic <<"\n";
    outfile << "Dear Allowance       : " <<per.emp_da <<"\n";
    outfile << "House Rent Allowance : " <<per.emp_hra <<"\n";
    outfile << "Medical Allowance    : " <<per.emp_ma <<"\n";
    outfile << "Provident Fund       : " <<per.emp_pf <<"\n";
    outfile << "Professional Tax     : " <<per.ptax <<"\n";
    outfile << "Income Tax           : " <<per.itax <<"\n";
    outfile << "Gross Salary         : " <<per.gross <<"\n";
    outfile << "Net Salary           : " <<per.net <<"\n";
    outfile.close();
}

void generate_pay_slip(contractual_employee per){
    //function to generate pay slip of permanent employees
    int no;
    char f1_name[9], num[8], emp[8], c;

    cout << "\n\nEnter month no (1..12): ";
    cin >> no;
    if(no>12 || no<=0){
        cout << "\n\nInvalid Month number";
        return;
    }
    system("cls");
    cout << ":::::::::::::::Pay Slip For Month Number " << no << ":::::::::::::::";
    per.calculate(); //perform calculation;
    per.displaydata(); // display data about employee

    // create file name to store pay slip of employee by concatenating employee no. with
    // month no. with an underscore character in between

    sprintf(num,"%d_",no);
    sprintf(emp,"%d_",per.emp_no);
    strcpy(f1_name,num);
    strcat(f1_name,emp);
    f1_name[strlen(num)+strlen(emp)]='\0';
    ofstream outfile(f1_name);

    //store pay slip in file

    outfile << ":::::::::::::::Pay Slip For Month Number "<<no<<":::::::::::::::\n\n";
    outfile << "Emp. Number      : " <<per.emp_no <<"\n";
    outfile << "Emp. Name        : " <<per.emp_name <<"\n";
    outfile << "Emp. Add         : " <<per.emp_add <<"\n";
    outfile << "Emp. Designation : " <<per.emp_desg <<"\n";
    outfile << "Emp. Department  : " <<per.emp_dept <<"\n";
    outfile << "Emp. Type        : " <<per.emp_type <<"\n";
    outfile << "Gross Salary     : " <<per.gross <<"\n";
    outfile << "Professional Tax : " <<per.ptax <<"\n";
    outfile << "Income Tax       : " <<per.itax <<"\n";
    outfile << "Net Salary       : " <<per.net <<"\n";
    outfile.close();
}

void compute_OT(){
    ifstream infile;
    permanent_employee p;
    contractual_employee c;
    int hours;
    ofstream outfile;
    infile.open("per_empf.txt");
    outfile.open("per_payroll");
    system("cls");

    cout << "\n\nComputation of Overtime Dues for Permanent Employee in Progress......";
    while(infile){
        infile>>p.emp_no;
    }
}
int main(){
    return 1;
}
