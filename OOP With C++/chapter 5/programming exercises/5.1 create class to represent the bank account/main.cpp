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
    void depositea_amount(float);
    void withdraw_check(float);
    void display();
    };

int main(){
    class_dipositor dipositor;
}
