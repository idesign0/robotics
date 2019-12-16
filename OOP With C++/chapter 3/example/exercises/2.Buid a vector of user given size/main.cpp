// create a vector of user given size M using new operator

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int * vp; // vector pointer

    int m;

    cout << "Enter size of pointer : ";
    cin >> m ;


    vp = new int[m];

    cout << "Allocation is successful to Vp "<< m << endl;

    delete vp;


}
