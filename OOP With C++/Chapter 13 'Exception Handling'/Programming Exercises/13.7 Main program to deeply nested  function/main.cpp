#include<iostream>
using namespace std;

void divide_fun(){
    int a,b;
    cout << "Enter two values of a and b : " ; cin >> a >>b;
        try{
            if(cin.fail()){
                throw "Bad input!";
            }
            else if(b==0){
                throw b;
            }else
                cout << "DIVISION : a/b : " << a/b << endl;
        }catch(const char*str){
            cout << str;
            throw;
        }catch(int){
            cout << "Division is zero !";
            throw;
        }
}

int main(){
    try{
        divide_fun();
    }catch(...){
        cout << "\nProgram control comes to main ! \n";
    }
    return 0;
}
