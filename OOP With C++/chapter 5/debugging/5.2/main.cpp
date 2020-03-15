#include<iostream>

using namespace std;

class stm{
    static int a;
    int number;
public :
    void increment(int b){
        number = b;
        a++;
    }

    void show(void){
        cout <<a<<endl;
    }
    };

    int stm::a;

int main(){
    stm st1,st2,st3;

    st1.increment(5);

    st1.show();
    st2.show();
    st3.show();

    return 0;
}
