// MAKE A FUNCTION USING A REFRENCE VARIABLES AS ARGUMENTS TO SWAP THE VALUES OF PAIR OF INTEGERS

#include <iostream>
#include <iomanip>

using namespace std;

int swapping(int,int);

int main(){

    // PAIR OF INTEGERS
    int a, b;
    int & x = a;
    int & y = b;
    cin >> a >> b;
    cout << "A = "<< x <<" "<<"B = "<< y << endl;

    swapping(x,y);


}
// SWAPPING FUNCTION

int swapping(int x ,int y){
    int temp = x;
    x=y;
    y=temp;

    cout << "A = "<< x <<" "<<"B = "<< y << endl;
}
