#include<iostream>
#include<string>
using namespace std;

template<class T,class U>
void display(T x,U y){
    cout << x << " "<<y<<"\n";
}

int main(){
    cout << "Calling function template with int and character string type parameter....\n";
    display(1999,"ABC");
    cout << "Calling function template with Float and integer string type parameter....\n";
    display(1.999,126);
}
