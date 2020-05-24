#include <iostream>
using namespace std;

class dhruv{
public:
    dhruv(){
    }
    int fun(int a){

    int w = a;
    cout << w;
    }

};


int main(){

    dhruv doo;
    dhruv * da = &doo ;
    da->fun(10);

}
