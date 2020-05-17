#include<iostream>
using namespace std;
float square(int * snum){
    cout << "Square of 10 is ";
    return *snum *= *snum;
}
int main(){
    int num =10;
    float value;

    value = square(&num);

    cout << "value : " << value ;
    return 0;
}
