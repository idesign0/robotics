#include<iostream>
using namespace std;

class swapping{
    int value;
public:
    swapping(int a):value(a){}

    void swap_fun(swapping &o){
    int temp;
     temp=(*this).value;
     (*this).value=o.value;
     o.value=temp;
    }
    void display_value(){
        cout << "value " <<value<< endl;
    }
};

int main(){
    swapping o1(10);
    swapping o2(20);

    cout << "\nBefore Swapping :\n";

    cout << "Object 1 " ; o1.display_value();
    cout << "Object 2 " ; o2.display_value();

    o1.swap_fun(o2);

    cout << "\nAfter Swapping :\n";

    cout << "Object 1 " ; o1.display_value();
    cout << "Object 2 " ; o2.display_value();


    return 0;
}
