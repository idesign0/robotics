#include<iostream>

using namespace std;

class addition{
        int p,q,r,s;
    public:
        void input(void){
        cout<< "Enter 3 numbers : P : Q : R : ";
        cin>> p >> q>> r;
        }
        void show(){
        cout << "This addition of three numbers : " << add (p,q,r) << endl ;
        }

        int add(int p,int q,int r){
            return p + q +r;
            }
    };
int main(){
    addition x;

    x.input();
    x.show();

    return 0;
}
