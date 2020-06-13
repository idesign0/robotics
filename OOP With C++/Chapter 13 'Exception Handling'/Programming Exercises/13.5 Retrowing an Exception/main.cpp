#include<iostream>
using namespace std;

int minuus(int a,int b){
    try{
        if(!(a-b)){
            throw 0;
        }else{
            return a-b;
        }
        }catch(int a){
            cout << "Dividend is Zero ! \n";
            throw;
        }

}

int main(){
    int a=5,b=3;
    float r;
    try{
        int division = minuus(a,b);
        r = (float)a/division;
        cout << "Ratio : " << r;
    }catch(int a){
        cout << "Control goes to main !";
    }
    return 0;
}
