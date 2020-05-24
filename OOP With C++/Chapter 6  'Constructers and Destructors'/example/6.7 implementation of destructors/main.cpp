#include <iostream>
using namespace std;

int count_var =0;
class test{
public :
    test(){
    count_var++;
    cout << "\n\nConstructor msg : Object number "<< count_var << " created..";
    }
    ~test(){
    cout << "\n\nDestructor msg : Object number "<< count_var << " destroyed..";
    count_var--;
    }
};

int main(){
    cout << "Inside the main block : ";
    cout << "\n\n Creating first object T1..";

    test T1;

    {
        cout << "Inside the block 1 .." ;
        cout << "Creating two more object T2 and T3 .. ";
        test T2,T3;
        cout << "Leaving block 1 .. ";

    }
    cout << "Back inside the main Block .." ;
    return 0;
}
