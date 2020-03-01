#include <iostream>

using namespace std;

class item{
        // private by default
    int numbers;
    float cost;

public:
    void getdata(int a,float b); // prototype declaration

    void putdata(){

        cout << "Numbers : " << numbers << endl;
        cout << "Costs : " << cost << endl;

    }
};

void item ::getdata(int a,float b){
        numbers = a;
        cost = b;
}


int main(){
    item x,y,z;

    cout << "\nObject x : "<< endl;
    x.getdata(1,154.52);
    x.putdata();

    cout << "\nObject y : "<< endl;
    y.getdata(5,124.52);
    y.putdata();

    cout << "\nObject z : "<< endl;
    z.getdata(54,1541.52);

    z.putdata();
}
