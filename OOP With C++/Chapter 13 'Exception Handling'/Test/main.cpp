#include <iostream>

using namespace std;
template<class T>

class vectors{
    T * v;
    int sizee;
public:
    vectors(){
    }
    vectors(int m,T *a){ // create vectors
        sizee=m;
        v = new T[sizee];

        for(int i=0;i<sizee;i++){
            v[i]=a[i];
        }
    }

    void display(){
    for(int i=0;i<sizee;i++)
        cout << v[i] << " ";
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
    float x[3]={1,2,3};
    float y[3]={4.55,5.41,6.25};

    vectors <float> v1(3,x);
    vectors <float> v2(3,y);

    v1.display();
    v2.display();

    float r = v1*v2;
    cout << "R = "<< r;

    return 0;
}
