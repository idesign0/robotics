#include<iostream>
using namespace std;

class code{
    int item;
public:
    code(){};
    code(int a){
    item=a;
    }
    code(code & i){
    item=i.item;
    }

    void display(){
    cout << item ;
    }
};


int main(){

    code A(100);
    code B(A); // copy constructor called
    code C = A; // copy constructor called again

    code D;
    D=A; // copy constructor called NOT

    cout << "\n id of A : " ; A.display();
    cout << "\n id of B : " ; B.display();
    cout << "\n id of C : " ; C.display();
    cout << "\n id of D : " ; D.display();
    return 0;

}
