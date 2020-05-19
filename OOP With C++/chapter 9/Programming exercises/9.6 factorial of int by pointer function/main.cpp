#include<iostream>
using namespace std;

typedef (*p_funpointer)(int);

int factorial(int a){
    if(a<=1){
        return 1;
    }else{
        return a*factorial(a-1);
    }
}
int main(){
    p_funpointer p_sort;
    p_sort = &factorial;

    int a=5;
    int facto_a=p_sort(a);
    cout <<"Factorial of a is : "<<facto_a;
    return 0;
}
