#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
using namespace std;

class binary{
    string s;
public:
    binary(){
    cout << "Enter a Binary Number : ";
    cin>>s;
    }
    void chk_bin(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout << "Incorrect binary number format ... the program will quit now ! ";
                getch();
                exit(0);
            }
        }
    }
    void ones(){
        chk_bin();
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else{
                s.at(i)='0';
            }
        }
    }
    void displayones(){
    ones();
    cout << "The complement of above binary number is : " << s;
    }
};

int main(){
    binary b;
    b.displayones();
    getch();

    return 0;
}
