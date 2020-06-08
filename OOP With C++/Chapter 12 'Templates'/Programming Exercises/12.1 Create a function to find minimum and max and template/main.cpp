#include<iostream>
using namespace std;

template<class T,int x>
class minimax{
    T a;
public:
    minimax(){
        a=x;
    }
   T getvalue(){
    return a;
   }

   T minimaxfun(minimax &y){
    (a > y.a ? cout<<a : cout<<y.a);
   }
};


int main(){
    minimax<int,65> obj1;
    minimax<int,7> obj2;

    obj1.getvalue() > obj2.getvalue() ? cout << obj1.getvalue() : cout << obj2.getvalue();
  //  obj1.minimaxfun(obj2);

    return 0;
}
