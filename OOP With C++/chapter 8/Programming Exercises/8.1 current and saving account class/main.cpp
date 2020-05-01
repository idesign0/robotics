#include<iostream>
using namespace std;

class account{
protected:
    string customer_name ;
    string type_of_account ;
    int account;
public:
    void add_details();
    void show_details();
};

    void account::add_details(){
        int choice;
        cin.ignore();
        cout << "Enter customer name : " ; getline(cin,customer_name);
        cout << "Enter type of account : " << endl
             << "Press 1 for Current account" << endl
             << "Press 2 for Savings account" << endl;
        cin >> choice ;

        if(choice==1){
                type_of_account="current";
                    }
            else if(choice==2){
                type_of_account="savings";
                    }
            else{
                cout << "Invalid choice !"
            }
        cout << "Enter account number : " ; cin >> account;
    }

void account::show_details(){

}

int main(){

    return 0;
}
