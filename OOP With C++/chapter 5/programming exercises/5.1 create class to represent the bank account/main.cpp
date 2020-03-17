#include<iostream>
#include<cstring>

using namespace std;

class class_dipositor{
    string name_depositors[20];
    int account_number;
    int type_of_account;
    float balance;

public :
    void initialvalue(){ balance = 0 };
    void deposit_amount();
    void withdraw_n_check();
    void display(int numbers);
    };

    void deposit_amount(float d){
        cout << "Enter the Amount you want to deposit : ";
        cin >> d;

        balance += d ;
    }

    void withdraw_n_check();{

        cout << "Enter the Amount you want to withdraw : ";
        cin >> d;

        balance -= d ;

        cout << "Your current balance is : " << balance;

    }
    void display(int numbers){
        for(int i=0;i<numbers;i++)
        cout << "Names\t\t"<<"Balance\n";
        cout << name_depositors <<"\t\t"<< balance ;
    }

int main(){
    const numbers = 20;
    class_dipositor dipositor[numbers];
}
