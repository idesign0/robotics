// throw point outside the try block

#include<iostream>
using namespace std;

void devide(int x,int y,int z){
    cout << "\nWe are inside the function\n";
    if(x-y !=0){
        int r = z/(x-y);
        cout << "Result : " << r << "\n";
        }else{
            throw(x-y); // throw point
        }
}

int main(){
    try{
    cout << "\nWe are inside the try block\n";
    devide(10,20,30); // invoke divide
    devide(10,10,30);
    }
    catch(int i){ // catch the exception
        cout << "Caught the exception\n";
    }

    return 0;
}
