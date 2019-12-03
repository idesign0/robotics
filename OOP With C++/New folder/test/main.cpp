#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int facto(int m);

int main()
{
    int value;
    cin >> value;
    cout << facto(value);
    return 0;
}

int facto(int m){

    if(m == 1){
    return 1;
    }
    else{
    return m * facto(m-1);
    }

}
