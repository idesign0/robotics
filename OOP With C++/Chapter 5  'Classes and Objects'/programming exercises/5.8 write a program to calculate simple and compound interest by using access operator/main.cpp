#include<iostream>
#include<cmath>
using namespace std;


class interest{
    float principal;
    float interest;
    float year;
public:

    float simple_interest(float p,float i,float n=1);
    float compound_interest(float p,float i,float n=1);
};
    float interest::simple_interest(float p,float i,float n){
            principal = p;
            interest = i;
            year = n;

        return principal*interest*year/100;
    }

    float interest::compound_interest(float p,float i,float n){
            principal = p;
            interest = i;
            year = n;

            float cmp = principal*(float)pow(1+interest/100,year);

            return cmp-principal;
    }

int main(){
    interest roi;
    float p,n,i;
    cout << "Enter Principal amount : Interest(in percentage) : Year : ";

    cin >> p >> i >>n;

    cout << "Simple net return : " << roi.simple_interest(p,i,n)<< endl;
    cout << "Compound net return : "<<roi.compound_interest(p,i,n) << endl;
}
