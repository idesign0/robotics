#include<iostream>
#include<cmath>
using namespace std;

class sample{
        int a;
        int b;
public:
        void setvalue(){
        a=20;b=75;
        }

        friend float meanavg(sample);
    };

    float meanavg(sample x){
        return (float)(x.a+x.b)/2;
    }

int main(){
    sample X;
    X.setvalue();

    cout << "Mean Value : "<< meanavg(X);
}
