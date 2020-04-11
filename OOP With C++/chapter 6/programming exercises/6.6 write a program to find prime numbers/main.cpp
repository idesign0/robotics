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
                k=0;
            }else{
                k=1;
            }
        }
    }
    void show_number(){
        cout << "Value : " << value << endl << endl;
        if(k==0){
            cout << "Value is not prime number" << endl;
        }
        else
            cout << "Value is prime number\n";
    }
};
int main(){
        prime o_prime(7);
        o_prime.check_number();
        o_prime.show_number();
    return 0;
}
