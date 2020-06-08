#include<iostream>
using namespace std;

template <class t1,class t2>
class person{
    t1 m_t1;
    t2 m_t2;
public:
        person(t1 x,t2 y){
        m_t1=x;
        m_t2=y;
        cout << "m_t1 = " << m_t1 << "\tm_t2 = " << m_t2 << endl;
    }
};

int main(){
    person<int,float> objperson1(1,2.345);
    person<float,char> objperson2(2.345,'r');
    return 0;
}
