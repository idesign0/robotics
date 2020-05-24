// to return the variable

#include <iostream>
using namespace std;

int & f(int &);

int main()
{
    int m;
    int &n =m;
    f(n)=1;
    cout << m;
}

int & f(int &n){
    return n;
}
