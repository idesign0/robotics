#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>
using namespace std;

class account{
protected:
    string customer_name ;
    string type_of_account ;
    int account_number;
    float balance_var;
    float minimum_balance;
    float interest_rate;
public:
    void add_details();
    void show_details();
    int searchh(string &,int);
};

int account::searchh(string &a,int b){
        if(a.compare(customer_name)==0 && b==account_number){
            return 1;
        }else
            return 0;
    }

    void account::add_details(){

        cout << "*****************************************************************"<<endl;
        cout << "Add details Section : " << endl;
        cin.ignore();
        int choice;
        cout << "Enter customer name : " ; getline(cin,customer_name);
        cout << "Enter type of account : " << endl
             << "Press 1 for Current account" << endl
             << "Press 2 for Savings account" << endl
             << "Option : ";
        cin >> choice ;

        if(choice==1){
                type_of_account="current";
                    }
            else if(choice==2){
                type_of_account="savings";
                    }
            else{
                cout << "Invalid choice !";
            }
        cout << "Enter account number : " ; cin >> account_number;
        cout << "Enter First deposit(greater than 1000) : " ; cin >> balance_var;
        cout << "Enter Interest rate of bank : " ; cin >> interest_rate;
        minimum_balance = 1000;



        cout << "*****************************************************************"<<endl;
    }

void account::show_details(){

        cout << "*****************************************************************"<<endl;
        cout << "Show details Section : " << endl;

        cout << "customer name : " << customer_name <<endl;
        cout << "type of account : " << type_of_account <<endl;
        cout << "type of account : " << account_number <<endl;
        cout << "Balance in account : " << balance_var <<endl;
        cout << "minimum balance require * : " << minimum_balance<<endl;


        cout << "*****************************************************************"<<endl;
}

class cur_acct:virtual public account{
public:
    void accept_deposit(){

        cout << "*****************************************************************"<<endl;
        cout << "Accept details Section : " << endl;

        float deposite ;

        cout << "Enter amount of money to deposit : " ; cin >> deposite;
        balance_var += deposite;
        cout << "Current balance of " << customer_name <<" : " << balance_var<<endl;


        cout << "*****************************************************************"<<endl;

    }

    void withdraw_value(){


        cout << "*****************************************************************"<<endl;
        cout << "Withdraw value Section : " << endl;

        float withdraw_ammount;
        cout << "Enter amount value to withdraw : "; cin >>withdraw_ammount;
        if(balance_var>=minimum_balance && (balance_var-withdraw_ammount)>=minimum_balance){

            balance_var=balance_var-withdraw_ammount;
            cout << "Balance of " << customer_name << " is : " << balance_var << endl;
        }else{
            cout << "insufficient balance , unable to withdraw !"<<endl;
        }

        cout << "*****************************************************************"<<endl;
    }
};

class sav_acct : virtual public account{
public:
    void accept_deposit(){

        cout << "*****************************************************************"<<endl;
        cout << "Accept deposit Section : " << endl;

        float deposite ;

        cout << "Enter amount of money to deposit : " ; cin >> deposite;
        balance_var += deposite;
        cout << "Current balance of " << customer_name <<" : " << balance_var << endl;


        cout << "*****************************************************************"<<endl;
    }
    void deposite_interest(){

        cout << "*****************************************************************"<<endl;
        cout << "Deposit interest Section : " << endl;

        int years;
        float net_value;
        cout << "Enter Number of years : " ; cin >> years;
        net_value = balance_var*pow(1+interest_rate,years)- balance_var;
        cout << "Net increase : " << net_value << endl;
        balance_var= balance_var + net_value;
        cout << "Total Balance " << balance_var << endl;


        cout << "*****************************************************************"<<endl;
    }
    void withdraw_value(){

        cout << "*****************************************************************"<<endl;
        cout << "withdraw Section : " << endl;

        float withdraw_ammount;
        cout << "Enter amount value to withdraw : "; cin >>withdraw_ammount;
            if((balance_var-withdraw_ammount)>0){
                balance_var=balance_var-withdraw_ammount;
                cout << "Balance of " << customer_name << " is : " << balance_var << endl;
            }

        cout << "*****************************************************************"<<endl;

        }
};

class bank_account:public cur_acct,public sav_acct{
public:


    void balance(){
        cout << "Balance of " << customer_name << " is : " << balance_var << endl;
    }

     void accept_deposit(){
        if(type_of_account=="current"){
            cur_acct::accept_deposit();
    }else{
        sav_acct::accept_deposit();
    }
    }

    void minimum_bal_chk(){
        if(type_of_account.compare("current")==0){
            cur_acct::withdraw_value();
    }else{
        sav_acct::withdraw_value();
    }
    }

    void deposite_interest(){
        if(type_of_account=="savings"){
            sav_acct::deposite_interest();
    }

    }

};

int main(){

    int members=0;
    bank_account * acc_holder[20];

    int option,i;
    string name;
    int account_number;

    while(1){
          cout << "Menu : " << endl;
          cout << "1. Add new account" << endl;
          cout << "2. Show details of account" << endl;
          cout << "3. Accept Deposit" << endl;
          cout << "4. Withdraw value" << endl;
          cout << "5. Deposit interest" << endl;
          cout << "6. Display Balance" << endl;
          cout << "7. Quite" << endl;
          cout << "Choose your option : "; cin >> option;

          switch(option){
                case 1 : acc_holder[members]=new bank_account;
                         acc_holder[members]->add_details();
                         members++; break;

              case 2 : cin.ignore();
                         cout << "Add account holder name : " ; getline(cin,name);
                         cout << "Add account number : " ; cin >> account_number;

                         for(i=0;i<=members;i++){
                            if(acc_holder[i]->searchh(name,account_number)){
                                acc_holder[i]->show_details();
                                break;
                            }
                         }
                         if(i==members){
                                cout << "No account is listed " << endl;
                         }      break;
                case 3 : cin.ignore();
                         cout << "Add account holder name : " ; getline(cin,name);
                         cout << "Add account number : " ; cin >> account_number;

                         for(i=0;i<members;i++){
                            if(acc_holder[i]->searchh(name,account_number)){
                                acc_holder[i]->accept_deposit();
                                break;
                            }
                         }
                         if(i==members){
                                cout << "No account is listed " << endl;
                         } break;
                case 4 : cin.ignore();
                         cout << "Add account holder name : " ; getline(cin,name);
                         cout << "Add account number : " ; cin >> account_number;

                         for(i=0;i<members;i++){
                            if(acc_holder[i]->searchh(name,account_number)){
                                acc_holder[i]->minimum_bal_chk();
                                break;
                            }
                         }
                         if(i==members){
                                cout << "No account is listed " << endl;
                         } break;
                case 5 : cin.ignore();
                         cout << "Add account holder name : " ; getline(cin,name);
                         cout << "Add account number : " ; cin >> account_number;

                         for(i=0;i<members;i++){
                            if(acc_holder[i]->searchh(name,account_number)){
                                acc_holder[i]->deposite_interest();
                                break;
                            }
                         }
                         if(i==members){
                                cout << "No account is listed " << endl;
                         } break;
                case 6 : cin.ignore();
                         cout << "Add account holder name : " ; getline(cin,name);
                         cout << "Add account number : " ; cin >> account_number;

                         for(i=0;i<members;i++){
                            if(acc_holder[i]->searchh(name,account_number)){
                                acc_holder[i]->balance();
                                break;
                            }
                         }
                         if(i==members){
                                cout << "No account is listed " << endl;
                         } break;
                 case 7 : exit(0);
        }
    }

    return 0;
}
