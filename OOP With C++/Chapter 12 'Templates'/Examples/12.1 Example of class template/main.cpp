#include <iostream>

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
    int x[3]={1,2,3};
    int y[3]={4,5,6};

    vectors <int> v1(x);
    vectors <int> v2(y);

    v1.display();
    v2.display();

    float r = v1*v2;
    cout << "R = V1 * V2 = "<<r;

    return 0;
}
