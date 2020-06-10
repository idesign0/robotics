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
    catch(char c){
        cout << "Caught a character \n";
    }
    catch(int c){
        cout << "Caught a integer \n";
    }
    catch(double c){
        cout << "Caught a double \n";
    }
    cout << "End of try and catch statement !\n";
}

int main(){
    cout << "Testing multiple catches : \n";
    cout << "x == 1 \n";
    test(1);
    cout << "x == 0 \n";
    test(0);
    cout << "x == -1 \n";
    test(-1);
    cout << "x == 2 \n";
    test(2);
    return 0;
}
