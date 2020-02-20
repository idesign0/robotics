#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "customfun.h"

using namespace std;

int main(){

        int m;
        int n;

        srand(time(0));

        cout << "Numbers of rows : ";
        cin >> m;
        cout << "Numbers of Columns : ";
        cin >> n;

        matfun(n,m);

        }



