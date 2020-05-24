#include <iostream>
using namespace std;

class math{
public :
    int sum(int a,int b){
    return a+b ;
    }
    int div(int a,int b){
        return a/b;
    }
};

int restsum (int a,int b,math m,int (math :: *psum)(int,int)){
    return (m.*psum)(a,b);
}
int restdiv (int a,int b,math m,int (math :: *pdiv)(int,int)){
    return ((m.*pdiv)(a,b));
}
int main(){
    math m;
    cout << "Addition is : " << restsum(3,6,m,&math::sum)<<endl;
    cout << "Division is : " << restsum(6,3,m,&math::div);
}
