#include<iostream>
#include<cmath>
using namespace std;

class code{
    int item;
public:
    code(){};
    code(code & i){
    item=i.item;
    }

    void display(){
    cout << item ;
    }
};


int main()


    return 0;
}
