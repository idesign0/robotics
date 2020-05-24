#include <iostream>

using namespace std;


class item{

    static int countt;
    int number;

public:
        void getdata(int a){
            number=a;
            countt++;
        }

        void getcount(void){
        cout << "Count : " << countt << "\n";
        }
    };

    int item:: countt = 1;

int main(){

    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;

}
