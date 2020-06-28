#include<iostream>
using namespace std;

int main(){
    int ivar=10;

    int * ptr = &ivar;

    cout <<*ptr<< endl;

    *ptr+=20;

    int incre = reinterpret_cast<int>(*ptr);

    cout <<*ptr<<"\t"<< incre;

    return 0;
}
