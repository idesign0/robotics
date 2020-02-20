#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "customfun.h"

using namespace std;


int main(){

        int m;
        int n;

        cout << "Numbers of rows : ";
        cin >> m;
        cout << "Numbers of Columns : ";
        cin >> n;


        double temp;
        srand(time(0));

        cout << " Random Values as Input : " << endl << endl;

        while(i<=m*n){
            temp = rand()%6 +1;
            matfun(temp,m,n); //
            i++;
        }
}



