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
    int get_factovalue(){return facto_value;}
    friend int operator==(factorial &,factorial &);
    friend int operator>=(factorial &,factorial &);
    friend int operator<=(factorial &,factorial &);
    friend int operator!=(factorial &,factorial &);

};

int operator==(factorial &a,factorial &b){
    if(a.get_factovalue()==b.get_factovalue()){
        return 1;
    }else
    return 0;
}

int operator>=(factorial &a,factorial &b){
    if(a.get_factovalue()>=b.get_factovalue()){
        return 1;
    }else
    return 0;
}

int operator<=(factorial &a,factorial &b){
    if(a.get_factovalue()<=b.get_factovalue()){
        return 1;
    }else
    return 0;
}

int operator!=(factorial &a,factorial &b){
    if(a.get_factovalue()!=b.get_factovalue()){
        return 1;
    }else
    return 0;
}
int main(){
    factorial Factvalue1 = 5 ;
    factorial Factvalue2 = 10 ;

    cout << "If two values are equal : ";
    (Factvalue1==Factvalue2) ? cout << "True" << endl : cout << "False" << endl;

    cout << "If 1 is greater than 2 : ";
    (Factvalue1>=Factvalue2) ? cout << "True" << endl : cout << "False"<< endl;


    cout << "If 1 is less than 2 : ";
    (Factvalue1<=Factvalue2) ? cout << "True" << endl : cout << "False"<< endl;

    cout << "If two values are not equal : ";
    (Factvalue1!=Factvalue2) ? cout << "True" << endl : cout << "False"<< endl;

    return 0;
}
