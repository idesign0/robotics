#include <iostream>

using namespace std;

float interestfunction(float p,int n,float r=0.15); // 0.15 interest rate
void printline(char ch='*',int length =40);

int main(){

    printline(); // to printing star on first
    float value = 5000;
    float amount=interestfunction(value,5); //  5 years
    cout << "Final Value : " << amount <<endl;

    amount=interestfunction(value,15); // 15 years
    cout << "Final Value : " << amount <<endl;

    printline('='); // printing '='
}

void printline(char ch,int length){
    cout << "\n";
    for(int i =0;i<=length;i++){
        cout << ch;
    }
    cout << "\n";
}

float interestfunction(float p,int n,float r){
    int year =1;
    float sum=p;
    while(year<=n){
            sum = sum*(r+1);
            year++;
    }
    return sum;
    }
