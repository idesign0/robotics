#include<iostream>
#include<cmath>
using namespace std;

class account{
protected:
    string customer_name ;
    string type_of_account ;
    int account_number;
    float balance_var=0;
    float interest_rate;
public:
    void add_details();
    void show_details();
};

    void account::add_details(){
        int choice;
        cout << "Enter customer name : " ; getline(cin,customer_name);
        cout << "Enter type of account : " << endl
             << "Press 1 for Current account" << endl
             << "Press 2 for Savings account" << endl
             << "Option : ";
        cin >> choice ;

        if(choice==1){
                type_of_account="Current";
                    }
            else if(choice==2){
                type_of_account="Savings";
                    }
            else{
                cout << "Invalid choice !";
            }
        cout << "Enter account number : " ; cin >> account_number;
        cout << "Enter Interest rate of bank : " ; cin >> interest_rate;
    }

void account::show_details(){
        cout << "customer name : " << customer_name <<endl;
        cout << "type of account : " << type_of_account <<endl;
        cout << "type of account : " << account_number <<endl;
}

class cur_acct:virtual public account{
public:
    void accept_deposit(){
        float deposite ;

        cout << "Enter amount of money to deposit : " ; cin >> deposite;
        balance += deposite;
        cout << "Current balance of " << customer_name <<" : " << balance_var;
    }
};

class sav_acct : virtual public account{
public:
    void accept_deposit(){
        float deposite ;

        cout << "Enter amount of money to deposit : " ; cin >> deposite;
        balance += deposite;
        cout << "Current balance of " << customer_name <<" : " << balance_var << endl;
    }
    void deposite_interest(){
        int years;
        float net_value;
        cout << "Enter Number of years : " ; cin >> years;
        net_value = balance_var*pow(1+interest_rate,years)-balance_var;
        cout << "Net increase : " << net_value;
        balance_var= balance_var + net_value;
        cout << "Total Balance " << balance_var;
    }
};

class bank_account:public cur_acct,public sav_acct{
public:
    void balance(){
        cout << "Balance of " << customer_name << " is : " << balance_var << endl;
    }
};

int main(){

    return 0;
}
