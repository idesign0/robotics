#include<iostream>

using namespace std;


template <class x>
void swapp(x &a,x &b){
    x temp = a;
    a=b;
    b=temp;
}

template<class T>
void bubble(T a[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=n-1;i<j;j--)
            if(a[j]<a[j-1]){
                swapp(a[j],a[j-1]);// calls template function
            }
}


int main(){
    int x[5]={10,50,30,40,20};
    int y[5]={1.1,5.5,3.3,4.4,2.2};

    bubble(x,5);
    bubble(y,5);

    cout << "Sorted x - array : ";
    for(int i=0;i<5;i++){
        cout << x[i] << " ";
    }
    cout << "\n";

    cout << "Sorted y - array : ";
    for(int i=0;i<5;i++){
        cout << y[i] << " ";
    }
    cout << "\n";

    return 0;
}
