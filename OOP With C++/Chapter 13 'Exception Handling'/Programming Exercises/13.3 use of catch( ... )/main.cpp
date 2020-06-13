#include<iostream>
using namespace std;

int main(){
    int a,b;
    float r;

    cout << "Enter values of a and b : " ; cin >>a>>b;
    try{
        if(!(a-b)){
            throw 0;
        }else if((a-b)==1)
            {
                throw 'c';
            }
        else if((a-b)<0)
            {
                throw 1.0;
            }
        else{
            r = (float)a/(a-b);
            cout << "Ratio : " << r << endl;
        }
    }
    catch(...){
        cout << "Exception is caught !";
    }
    return 0;
}
