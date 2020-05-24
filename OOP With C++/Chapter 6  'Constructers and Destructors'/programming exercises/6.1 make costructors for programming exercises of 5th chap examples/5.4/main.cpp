#include<iostream>
using namespace std;

class item {
    static int countt;
    int number;
public :
    item(){}
    item(int a){
        number = a;
        countt++;
    }
    void getcount(){
    cout << "Count : "<< countt << endl;
    }
};

int item::countt;

int main(){
    item a,b,c;

    a.getcount();
    b.getcount();
    c.getcount();

    a=item(100);
    b=item(200);
    c=item(300);

    cout << "After reading data" << endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}
