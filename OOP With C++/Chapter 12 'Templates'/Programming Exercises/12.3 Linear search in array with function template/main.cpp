#include<iostream>
#include<stdlib.h>
using namespace std;

template <class T>
void linear_search(T *arr,T element){

    for(int i =0;i<10;i++){
        if(arr[i]==element){
            cout << "We found out gem !"<< endl;
        }
    }}

int main(){
    int arrayy_int[10]={10,15,25,35,1,6,48,68,1,69};
    linear_search(arrayy_int,10);

    double arrayy_double[10]={10.25,15.45,25.638,35.15,1.258,6.15,48.58,68.2,1.2,69.52};
    linear_search(arrayy_double,35.15);

    return 0;
}
