#include<iostream>
using namespace std;

int main(){
    int num[]={58,15,61,58,45,20};
    int *ptr;
    int i;

    cout << "The array values are : \n";
    for(i=0;i<=5;i++){
        cout << num[i]<<endl;
    }
    ptr = num;

    cout << "\nvalue of ptr : "<<*ptr<<endl;
    ptr++;
    cout << "\nvalue of ptr++ : "<<*ptr<<endl;
    ptr--;
    cout << "\nvalue of ptr-- : "<<*ptr<<endl;
    ptr=ptr+2;
    cout << "\nvalue of ptr+2 : "<<*ptr<<endl;
    ptr=ptr-1;
    cout << "\nvalue of ptr-1 : "<<*ptr<<endl;
    ptr+=3;
    cout << "\nvalue of ptr+=3 : "<<*ptr<<endl;
    ptr-=2;
    cout << "\nvalue of ptr-=2 : "<<*ptr<<endl;
    return 0;
}
