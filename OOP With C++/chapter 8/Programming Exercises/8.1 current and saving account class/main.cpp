#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class account{
protected:
    string customer_name ;
    string type_of_account ;
    int account_number;
    float balance_var=0;
    float minimum_balance=1000;
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
        balance_var += deposite;
        cout << "Current balance of " << customer_name <<" : " << balance_var;
    }

    void withdraw_value(){
        float withdraw_ammount;
        cout << "Enter amount value to withdraw : "; cin >>withdraw_ammount;
        if(balance_var<=minimum_balance || (balance_var-withdraw_ammount)<=minimum_balance){

            balance_var=balance_var-withdraw_ammount;
            cout << "Balance of " << customer_name << " is : " << balance_var << endl;
        }

    }
};

class sav_acct : virtual public account{
public:
    void accept_deposit(){
        float deposite ;

        cout << "Enter amount of money to deposit : " ; cin >> deposite;
        balance_var += deposite;
        cout << "Current balance of " << customer_name <<" : " << balance_var << endl;
    }
    void deposite_interest(){
        int years;
        float net_value;
        cout << "Enter Number of years : " ; cin >> years;
        net_value = balance_var*pow(1+interest_rate,years)- balance_var;
        cout << "Net increase : " << net_value;
        balance_var= balance_var + net_value;
        cout << "Total Balance " << balance_var;
    }
    void withdraw_value(){
        float withdraw_ammount;
        cout << "Enter amount value to withdraw : "; cin >>withdraw_ammount;
            if((balance_var-withdraw_ammount)>0){
                balance_var=balance_var-withdraw_ammount;
                cout << "Balance of " << customer_name << " is : " << balance_var << endl;
            }
        }
};

class bank_account:public cur_acct,public sav_acct{
public:
    void balance(){
        cout << "Balance of " << customer_name << " is : " << balance_var << endl;
    }

    void minimum_bal_chk(){
        if(type_of_account=="current"){
            cur_acct::withdraw_value();
    }else{
        sav_acct::withdraw_value();
    }
    }
};

int main(){

    return 0;
}
