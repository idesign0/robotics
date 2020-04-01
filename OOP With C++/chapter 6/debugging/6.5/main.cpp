#include <iostream>
using namespace std;

class des{
public:
    des(int x){
        cout << "Start value " << x << endl;
        }
    ~des(){
        cout << "hi";
        }
};
int main(){
    des d1(9);
    return 0;
    }
