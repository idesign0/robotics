#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter values of a and b : " ;cin>>a>>b;
    int x;
    x=a-b;

    try{
        if(x!=0){
            cout << "Result(a/x) : " << a/x << "\n";
        }else{
            throw(x); // throw int object
        }
    }
    catch(int i){ // catch the exception
        cout << "Exception caught : DIVIDE BY ZERO\n";
    }
    cout << "\n..";

    return 0;
}
