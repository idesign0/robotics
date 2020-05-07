#include <iostream>
 using namespace std;

 int main(){
   int a=10;
   int *ptr=&a;

   cout << "The value of a is : "<<*ptr<<endl;
   *ptr = *ptr +a;
   cout << "The revised value of a is : " << a;
    return 0;
 }

