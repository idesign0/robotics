#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<conio.h>
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
    cin.ignore();
    cin.getline(emp_name,40);
    cout << "\nEnter the Address of the employee : ";
    cin.getline(emp_add,80);
    cout << "\nEnter the designation of the employee : ";
    cin.getline(emp_desg,20);
    cout << "\nEnter the Department of the employee : ";
    cin.getline(emp_dept,20);
}

void employee::displaydata(){
    cout << "\nEmp. No.               : "<< emp_no;
    cout << "\nName                   : "<< emp_name;
    cout << "\nAddress                : "<< emp_add;
    cout << "\nDesignation            : "<< emp_desg;
    cout << "\nDepartment             : "<< emp_dept;
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
        getch();
        return;
    }
    try{ // exception handling for negative income tax
        cout << "\nEnter the income tax to be deducted : ";
        cin >> this->itax;
        if(itax<0){
            throw itax;
        }
    }catch(...){
        cout << "\nIncome tax to be Positive.";
        getch();
        return;
    }

    calculate();
}

void permanent_employee::calculate(){
    int da=0,hra=0;
    strcpy(emp_type,"permanent");

    da = get_da_rate();
    this->emp_da = (emp_basic*da)/100; // da is calculated as permanent basis

    hra = get_hra_rate();
    this->emp_hra = (emp_basic*hra)/100; // hra is calculated as permanent basis

    emp_ma = get_ma();

    emp_pf = (emp_basic + emp_da)*(0.12);//pf is calculated as a percentage of basic+da

    this->ptax = get_ptax();
    gross = emp_basic + emp_da + emp_hra + emp_ma; // calc. of gros

    net= gross-ptax-itax-emp_pf; // calc of net
}

void permanent_employee::displaydata(){
    employee::displaydata(); // calling base display data
    cout << "\nEmployee type          : "<< emp_type;
    cout << "\nBasic                  : "<< emp_basic;
    cout << "\nDearness Allowance     : "<< emp_da;
    cout << "\nHousing Rent Allowance : "<< emp_hra;
    cout << "\nMedical allowance      : "<< emp_ma;
    cout << "\nProvident Fund         : "<< emp_pf;
    cout << "\nProfessional Tax       : "<< ptax;
    cout << "\nIncome tax             : "<< itax;
    cout << "\nGross salary           : "<< gross;
    cout << "\nNet salary             : "<< net;
    getch();
}

void permanent_employee::store_in_file(){
    ofstream outfile;
    outfile.open("per_empf.txt", ios::app); // open per_emp in in append mode
    // stores details of permanent employees
    outfile << emp_no << "\n";
    outfile << emp_name << "\n" << emp_add << "\n" <<emp_desg<< "\n"
            << emp_dept << "\n" << emp_type << "\n" << emp_basic << "\n"
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
        getch();
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
        getch();
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
    cout << "\nEmployee Type          : " << emp_type;
    cout << "\nGross salary           : "<< gross;
    cout << "\nProfessional Tax       : "<< ptax;
    cout << "\nIncome tax             : "<< itax;
    cout << "\nNet salary             : "<< net;
    getch();
}

void contractual_employee::store_in_file(){
    ofstream outfile;
    outfile.open("con_empf.txt", ios::app); // open con_emp in in append mode
    // stores details of contractual employees
    outfile << emp_no << "\n";
    outfile << emp_name << "\n" << emp_add << "\n" <<emp_desg<< "\n"
            << emp_dept << "\n" << emp_type << "\n" << gross << "\n"
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
        getch();
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
        getch();
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
    outfile.open("per_payroll.txt");
    system("cls");

    cout << "\n\nComputation of Overtime Dues for Permanent Employee in Progress......";
    while(infile){
        infile>>p.emp_no;
        infile.ignore(1000,'\n');
        infile.getline(p.emp_name,40);
        infile.getline(p.emp_add,80);
        infile.getline(p.emp_desg,20);
        infile.getline(p.emp_dept,20);
        infile >> p.emp_type >> p.emp_basic >> p.emp_da
                   >> p.emp_hra >> p.emp_ma >> p.emp_pf >> p.ptax >> p.itax >> p.gross >>p.net;

        // needed to check if eof flag has been set
        // else last employee details will be read twice
        if(infile.eof()){
            break;
        }

        cout << "\nEnter the Overtime hours for employee no. "<<p.emp_no<<" : " ; cin >> hours;
        p.net = p.net + hours*400; // overtime rate is 400 per hour

        outfile << p.emp_no << "\n";
        outfile << p.emp_name << "\n" << p.emp_add << "\n" <<p.emp_desg<< "\n"
                << p.emp_dept << "\n" << p.emp_type << "\n" << p.gross << "\n"
                << hours*400 << "\n"<< p.net << "\n" ;
    }
    infile.clear();
    infile.close();
    outfile.close();

    cout << "\nOvertime Dues Computation for permanent employees complete";
    cin.get();
    infile.open("con_empf.txt");
    outfile.open("con_payroll.txt");
    system("cls");

    cout << "\n\nComputation of Overtime Dues for Contractual Employee in Progress......";
    while(infile){
        infile>>c.emp_no;
        infile.ignore(1000,'\n');
        infile.getline(c.emp_name,40);
        infile.getline(c.emp_add,80);
        infile.getline(c.emp_desg,20);
        infile.getline(c.emp_dept,20);
        infile >> c.emp_type >> c.gross >> c.ptax >> c.itax  >>c.net;

        // needed to check if eof flag has been set
        // else last employee details will be read twice
        if(infile.eof()){
            break;
        }

        cout << "\nEnter the Overtime hours for employee no. "<<c.emp_no<<" : " ; cin >> hours;

        c.net = c.net + hours*400; // overtime rate is 400 per hour

        outfile << c.emp_no << "\n";
        outfile << c.emp_name << "\n" << c.emp_add << "\n" <<c.emp_desg<< "\n"
                << c.emp_dept << "\n" << c.emp_type << "\n" << c.gross << "\n"
                << hours*400 <<"\n"<< c.net << "\n" ;
    }
    infile.clear();
    infile.close();
    outfile.close();

    system("cls");

    cout << "\n\nThe Overtime Dues for the Employees are as follows : \n\n";
    cout.setf(ios::left,ios::adjustfield); // display output in formatted fashion
    cout.width(10);
    cout << "Emp. No.";
    cout.setf(ios::left,ios::adjustfield);
    cout.width(40);
    cout << "Emp. Name  ";
    cout.setf(ios::left,ios::adjustfield);
    cout.width(40);
    cout << "Overtime Dues"<<"\n\n";

    infile.open("per_payroll.txt");

    while(infile){
        int hours_due;
        infile>>p.emp_no;
        infile.ignore(1000,'\n');
        infile.getline(p.emp_name,40);
        infile.getline(p.emp_add,80);
        infile.getline(p.emp_desg,20);
        infile.getline(p.emp_dept,20);
        infile >> p.emp_type >> p.gross >> hours_due >>p.net;

    if(infile.eof()){
        break;
    }

    cout.setf(ios::left,ios::adjustfield); // display output in formatted fashion
    cout.width(10);
    cout << p.emp_no;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(40);
    cout << p.emp_name;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(40);
    cout << hours_due <<"\n";

    }
    infile.clear();
    infile.close();

    infile.open("con_payroll.txt");
    while(infile){
        int hours_due;
        infile>>c.emp_no;
        infile.ignore(1000,'\n');
        infile.getline(c.emp_name,40);
        infile.getline(c.emp_add,80);
        infile.getline(c.emp_desg,20);
        infile.getline(c.emp_dept,20);
        infile >> c.emp_type >> p.gross >> hours_due >> p.net;

    if(infile.eof()){
        break;
    }
    cout.setf(ios::left,ios::adjustfield); // display output in formatted fashion
    cout.width(10);
    cout << c.emp_no;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(40);
    cout << c.emp_name;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(40);
    cout << hours_due << "\n";

    }
    getch();
        infile.clear();
    infile.close();
}

int get_da_rate(){ // function to retrieve da rate from file
    int da=0;
    ifstream infile("da_file.txt");
    infile>>da;
    infile.close();
    return da;
}

int get_hra_rate(){ // function to retrieve hra rate from file
    int hra=0;
    ifstream infile("hra_file.txt");
    infile>>hra;
    infile.close();
    return hra;
}

int get_ma(){ // function to retrieve medical allowance from file
    int ma=0;
    ifstream infile("ma.txt");
    infile>>ma;
    infile.close();
    return ma;
}

int get_ptax(){ // function to retrieve Professional tax from file
    int ptax=0;
    ifstream infile("ptax_f1.txt");
    infile>>ptax;
    infile.close();
    return ptax;
}

void set_da_rate(int da){ // function to set da rate
    ofstream outfile("da_file.txt");
    outfile<<da;
    outfile.close();
}

void set_hra_rate(int hra){ // function to set hra rate
    ofstream outfile("hra_file.txt");
    outfile<<hra;
    outfile.close();
}

void set_ma(int ma){ // function to set medical allowance
    ofstream outfile("ma.txt");
    outfile<<ma;
    outfile.close();
}

void set_ptax(int ptax){ // function to set Professional tax
    ofstream outfile("ptax_f1.txt");
    outfile<<ptax;
    outfile.close();
}

int get_emp_no(){ // function for auto generating employee numbers
    ifstream infile;
    int no;
    infile.open("empno_f1.txt");
    if(!infile.fail()){
        infile>>no;
        no=no+1;
        infile.close();
       }
   else no = 1;
   ofstream outfile("empno_f1.txt");
   outfile<<no;
   outfile.close();
   return no;
}
int main(){
    int choice, emp_type, no;
    int da, hra, ma, ptax;
    permanent_employee per_person;
    contractual_employee con_person;

    while(1){
        system("cls");
        cout << "\n::::::::::MENU::::::::::";
        cout << "\n1. New Employee";
        cout << "\n2. Generate Pay Sleep";
        cout << "\n3. Set Dearness Allowance Rate";
        cout << "\n4. Set HRA rate";
        cout << "\n5. Set Professional tax";
        cout << "\n6. Set Medical Allowance rate";
        cout << "\n7. Display Details Of Employee";
        cout << "\n8. Compute Overtime Dues For Employees";
        cout << "\n9. Exit";

        cout << "\n\nEnter your Choice : "; cin >> choice ;

        fflush(stdin);

        system("cls");

    switch(choice){
    case 1 : //Entering new employees details
        cout << "\nEnter the employee type";
        cout << "\n1. Permanent Employee";
        cout << "\n2. Contractual Employee";
        cout << "\n\nChoice : ";
        cin >> emp_type;

        switch(emp_type){
        case 1 : // permanent employee
            per_person.getdata();
            per_person.store_in_file();
            break;

        case 2 : // Contractual employee
            con_person.getdata();
            con_person.store_in_file();
            break;
            }
        break;

    case 2 : //Generate Payslip
        cout << "\n\nEnter Employee No. : ";
        cin >> no ;
        cout << "\n\nEnter Employee type : ";
        cout << "\n1. Permanent Employee";
        cout << "\n2. Contractual Employee";
        cout << "\n\nChoice : ";
        cin >> emp_type;

        switch(emp_type){
        case 1 : // permanent employee
            if((search(no,&per_person))==0){
                cout << "\n\nInvalid Employee Number.";
            }
            else{
                generate_pay_slip(per_person);
            }
            break;

        case 2 : // Contractual employee
             if((search(no,&con_person))==0){
                cout << "\n\nInvalid Employee Number.";
            }
            else{
                generate_pay_slip(con_person);
            }
            break;
        default :
            cout << "\n\nWrong Type !";
            break;
            }
        break;
    case 3 : // set DA rate
        cout << "\n\nEnter new Dearness Allowance rate : ";
        cin >> da;
        set_da_rate(da);
        break;
    case 4 : // set HRA rate
        cout << "\n\nEnter new HRA rate : ";
        cin >> hra;
        set_hra_rate(hra);
        break;

    case 5 : // set Professional Tax
        cout << "\n\nEnter new Professional Tax : ";
        cin >> ptax;
        set_ptax(ptax);
        break;

    case 6 : // set Medical allowance
        cout << "\n\nEnter new Medical Allowance rate : ";
        cin >> ma;
        set_ma(ma);
        break;

    case 7 : // search for employee
        cout << "\n\nEnter Employee Number : ";
        cin >> no;
        cout << "\nEnter the employee type";
        cout << "\n1. Permanent Employee";
        cout << "\n2. Contractual Employee";
        cout << "\n\nChoice : ";
        cin >> emp_type;
        switch(emp_type){
        case 1 : // permanent employee
           if((search(no,&per_person))==0){
                cout << "\n\nInvalid Employee Number.";
            }
            else{
                per_person.displaydata();
            }
            break;

        case 2 : // Contractual employee
            if((search(no,&con_person))==0){
                cout << "\n\nInvalid Employee Number.";
            }
            else{
                con_person.displaydata();
            }
            break;

        default :
            cout << "\n\nWrong Type !";
            break;
            }
        break;
    case 8 : // compute overtime dues for employees
        compute_OT();
        break;

    case 9 : // exit system
        exit(0);

    default :
        cout << "\n\nWrong Choice";
    } // End of Switch case fir main menu
    }// end of While loop
    return 0;
}
