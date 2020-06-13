#include<iostream>
using namespace std;

int main(){
    int p,q;
    cout << "Input two integer numbers : ";
    cin >>p>>q;
    try{
        if(q!=0){
            float div = (float)p/q;
            if(div<0){
                throw 'm';
            }
            cout << "P/Q = " << div ;
        }else
            throw q;
    }
    catch(int m){
        cout << "Exception caught : division by zero !";
    }
    catch(char t){
        cout << "Exception caught : division is less then 1 !";
    }
    return 0;
}
