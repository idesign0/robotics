// print

/*
1
22
333
4444
55555
.......  */


#include <iostream>

using namespace std;

int main(){

    int howmany;

    cout << "Enter How many times you want to run the loop : " ; cin >> howmany ;


    for(int i=1;i<=howmany;i++){
            cout << "\n";
         for(int j=1;j<=i;j++){
                cout << i;
        }
    }


}
