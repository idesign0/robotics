#include <iostream>
using namespace std;

class class_2;

class class_1{
    int value1;

public:
    void putdata(int a){
    this->value1=a;
    }
    void getdata(){
    cout<<"Value1 : " << value1 << endl;
    }

    friend void swapfun(class_1 &, class_1 &);
};

    void swapfun(class_1 &a,class_1 &b){
        int temp=a.value1;
        a.value1=b.value1;
        b.value1=temp;
    }

main(){
    class_1 a,b;

    a.putdata(50);
    b.putdata(500);

    cout << "Values before the swapping : " ;

    a.getdata();
    b.getdata();

    swapfun(a,b);

    cout << "Values after the swapping : " ;

    a.getdata();
    b.getdata();

}b
