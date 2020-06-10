#include<iostream>
using namespace std;

void test(int x){
    try{
        if(x==1) throw x; // int
        else
            if(x==0) throw 'x'; // char
        else
            if(x==-1) throw 1.0; //double
        cout << "End of try-block \n";
    }
    catch(...){
        cout << "Caught an exception \n";
    }
    }

int main(){
    cout << "Testing multiple catches : \n";
    cout << "x == 1 \n";
    test(1);
    cout << "x == 0 \n";
    test(0);
    cout << "x == -1 \n";
    test(-1);
    return 0;
}
