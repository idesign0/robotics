#include<iostream>

using namespace std;

#define arr_max 5;

template <class t>
t find_minimum(t arr[]){
    int i=0;
    t MIN=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<=MIN){
            MIN=arr[i];
                }
            }
            return MIN;
}

int main(){
    int I_min;
    float F_min;
    char C_min;

    // defining different array type
    int I[5]={5,500,100,16,858};
    float F[5]={5.66,4.5,12.35,1.2,25.3};
    float C[5]={'a','A','/','4','~'};

    // finding minimum value in each array
    I_min=find_minimum(I);
    F_min=find_minimum(F);
    C_min=find_minimum(C);

    //printing the results
    cout << "Minimum value in integer array : "<<I_min;
    cout << "\nMinimum value in Float array : "<<F_min;
    cout << "\nMinimum value in Character array : "<<C_min;
    return 0;
}
