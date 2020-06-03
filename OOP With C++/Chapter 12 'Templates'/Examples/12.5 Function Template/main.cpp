#include<iostream>

using namespace std;

template<class T>

void swapp(T &x,T &y){
    T temp = x;
    x=y;
    y=temp;
}

void fun(int m,int n,int a,int b){
    cout << "m and n Before swap : " << m << " " <<n<<" \n";
    swap(m,n);
    cout << "m and n After swap : " << m << " " <<n<<" \n";

    cout << "a and b Before swap : " << a << " " <<b<<" \n";
    swap(a,b);
    cout << "a and b After swap : " << a << " " <<b<<" \n";

}

int main(){
    fun(100,200,11.22,33.44);
    return 0;
}
