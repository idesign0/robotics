#include <iostream>
using namespace std;

int m = 5;
int main(){
    int m =10;
    {
        int k = m;
        int m = 15;
        cout << "inner block k : " << k << endl;
        cout << "inner block m : " << m << endl;
        cout << "outer block m : " << ::m << endl;
    }
        cout << "outer block m : " << m << endl;
        cout << "outer block m : " << ::m << endl;

}
