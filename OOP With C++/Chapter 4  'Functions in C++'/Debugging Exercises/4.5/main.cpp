#include <iostream>

using namespace std;

int p;
int & r = p;
int & display(int &);

int main(){

    display(r) = 5;
    cout << p;
    return 0;
    }
int & display(int & r){
        return r;
}
