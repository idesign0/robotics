#include<iostream>
#include<string>

using namespace std;

namespace functions{
    int divide(int x, int y){
        return x/y;
    }
    int prod(int x,int y);
}
int functions::prod(int x,int y){
    return(x*y);
}

int main(){
    using namespace functions;

    cout << "Division : " << divide(20,10) << endl;
    cout << "Multiplication : " << prod(20,10) << endl;

    return 0;
}
