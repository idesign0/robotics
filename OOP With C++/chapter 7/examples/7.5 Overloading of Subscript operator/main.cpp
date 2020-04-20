#include<iostream>
using namespace std;

class arr{
    int a[5];
public:
    arr(int * x){
        for(int i=0;i<5;i++)
            a[i]=x[i];
    }
    int operator[](int k){
        return a[k];
    }
};
int main(){
    int x[5]={1,2,1,3,5};

    arr A(x);

    for(int i=0;i<5;i++){
        cout << x[i];
    }
    return 0;
}
