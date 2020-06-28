#include<iostream>
using namespace std;

namespace A{
    int i;

    void dispi(){
        cout << i;
    }
}

    namespace inside{
        int insidei;
        void dispinsidei(){
            cout << insidei;
        }
    }

int main(){
    A::i=10;
    cout << A::i << endl;

    A :: dispi();
    cout << endl;

    inside :: insidei = 20;
    cout << inside::insidei << endl;

    inside::dispinsidei();

}
