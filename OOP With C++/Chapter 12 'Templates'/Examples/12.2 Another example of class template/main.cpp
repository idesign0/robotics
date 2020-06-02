#include <iostream>
#include<iomanip>
using namespace std;
const int sizee=3;

template<class T>
class vectors{
    T * v;
public:
    vectors(){}
    vectors(T *a){ // create vector
        v = new T[sizee];
        for(int i=0;i<sizee;i++){
            v[i]=a[i];
        }
    }

    void display(){
    for(int i=0;i<sizee;i++)
        cout << v[i] << "\t";
        cout << "\n";
    }

    T operator *(vectors &y){
        T sum=0;
        for(int i=0;i<sizee;i++){
            sum =sum + ((v[i])*(y.v[i]));
        }
        return sum;
    }
};

int main()
{
    float x[3]={1.1,2.2,3.3};
    float y[3]={4.4,5.5,6.6};

    vectors <float> v1(x);
    vectors <float> v2(y);

    v1.display();
    v2.display();

    float r = v1*v2;
    cout<<setprecision(8)<< "R = V1 * V2 = "<<r;

    return 0;
}
