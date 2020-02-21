#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "customfun.h"

using namespace std;

int main(){
    int a,b,c,d,n;

    cout << "Enter the values for Sum of 2 values : ";
    cin >> a >> b;

    sum(a,b);

    cout << "Enter the values for Sum of 2 values : ";
    cin >> a >> b >> c;

    sum(a,b,c);

    cout << "Enter the values for Sum of 2 values : ";
    cin >> a >> b >> c >> d;

    sum(a,b,c,d);

    cout << "Enter the values for Sum of number of values you wont to give : ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    sum(arr,n);

}



