#include <iostream>

using namespace std;


class item{
    int code;
    static int countt;

public:
    void getcode(void){
    code=++countt;
    }
    void showcode(void){
    cout << "Code : "<< code << endl;
    }
    static void showcount(void){
    cout << "Count : "<< countt << endl;
    }
};

    int item::countt;

 int main(){

    item i1,i2;

    i1.getcode();
    i2.getcode();

    item::showcount();

    item i3;
    i3.getcode();

        item::showcount();

    i1.showcode();
    i2.showcode();
    i3.showcode();


    return 0;

}
