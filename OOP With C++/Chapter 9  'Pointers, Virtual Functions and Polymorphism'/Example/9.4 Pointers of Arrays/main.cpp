#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,num,*ptr;

    ptr =arr;

    cout << "Enter element need to be search : " ;cin>>num;

    for(i=0;i<=10;i++){
        if(*ptr==num){
            cout << "Number is present in array !"<<endl;
            break;
        }else if(i==10){
            cout << endl << num << " is not present in this array"<<endl;
            ptr++;
        }
        ptr++;
    }
    return 0;
}
