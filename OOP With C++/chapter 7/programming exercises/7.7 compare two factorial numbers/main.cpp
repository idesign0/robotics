#include<iostream>
using namespace std;

int fact_fun(int v){
            if(v==1){
                return 1;
            }else{
                return v * fact_fun(v-1);
            }
        }

class factorial{
    int value;
    int facto_value=fact_fun(value);
public:
    factorial(int v):value(v){
    }
    void show(){
        cout << "Value : " << value <<" factorial value : " << facto_value << endl;
    }

    friend int operator==(factorial &,factorial &);
};

int operator==(factorial &,factorial &){

}

int main(){
    factorial Factvalue = 5 ;

    Factvalue.show();
    return 0;
}
