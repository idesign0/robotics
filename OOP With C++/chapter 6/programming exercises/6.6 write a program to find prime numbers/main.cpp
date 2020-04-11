#include<iostream>
using namespace std;

class prime{
    int value,k;
public:
    prime(int x){
        value=x;
    }
    void check_number(){
        for(int i=2;i<=value/2;i++){
            if(value%i==0){
                value=0;
            }else{
                value=1;
            }
        }
    }
    void show_number(){
        cout << "Value : " << value << endl << endl;
        if(k==0){
            cout << "Value is prime number" << endl;
        }
        else
            cout << "Value is not prime number\n";
    }
};
int main(){

    return 0;
}
