#include<iostream>
#include<string>

using namespace std;

namespace classes{
    class test{
        int m;
    public:
        test(int a){
            m=a;
        }
        void display(){
        cout << "m = "<< m << endl;
        }
    };
}
int main(){
    //using scope resolutions
    classes::test t1(2300);
    t1.display();

    //using directive
    using namespace classes;
    test t2(400);
    t2.display();

    return 0;
}
