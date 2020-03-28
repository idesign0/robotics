#include<iostream>
#include<cmath>
using namespace std;

class fixed_deposit{
    long int p_amount;
    int years;
    float rate;
    float R_value;
public:
    fixed_deposit(){}
    fixed_deposit(long int p,int y,float r=0.12);
    fixed_deposit(long int p,int y,int r);
    void display(void);
};

fixed_deposit::fixed_deposit(long int p,int y,float r){
    p_amount=p;
    years=y;
    rate =r;
    R_value = 0;

    R_value += ((float)p_amount)*pow(1+rate,years);
}

fixed_deposit::fixed_deposit(long int p,int y,int r){
    p_amount=p;
    years=y;
    rate =r;
    R_value = 0;

    R_value += ((float)p_amount)*pow(1+rate/100,years);
}

void fixed_deposit::display(){
    cout << "\n"
         << "Principal Amount : " << p_amount << "\n"
         << "Return value : " << R_value <<"\n";

}

int main()
{
    fixed_deposit FD1,FD2,FD3;

    long int p;
    int y;
    float r;
    int R;

    cout << "Enter Amount, period, return rate(in percentage) :" << endl;
    cin >> p >> y >> R;
    FD1=fixed_deposit(p,y,R);

    cout << "Enter Amount, period, return rate(in decimal) : " << endl;
    cin >> p >> y >> r;
    FD2=fixed_deposit(p,y,r);

    cout << "Enter Amount and period : " << endl;
    cin >> p >> y ;
    FD3=fixed_deposit(p,y);

    cout << "\nDeposit 1 :";
        FD1.display();

    cout << "\nDeposit 2 :";
        FD2.display();

    cout << "\nDeposit 3 : ";
        FD3.display();

    return 0;
}
