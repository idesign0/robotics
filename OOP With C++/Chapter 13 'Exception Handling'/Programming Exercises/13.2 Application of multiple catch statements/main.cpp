#include<iostream>
using namespace std;
const int sizee=5;
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
    catch(int a){
        cout << "Exception is caught : 0 in division";
    }
    catch(char a){
        cout << "Exception is caught : 1 in division";
    }
    catch(double a){
        cout << "Exception is caught : division is minus";
    }
    return 0;
}
