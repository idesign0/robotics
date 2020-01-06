#include <iostream>

using namespace std;

int sub(int b,int a=20){
    int results = b-a;
    return results;
}

int main(){

    int a =100;
    int b =200;
    int result;

    result = sub(b);
    cout << "result 1 : " << result << endl ;
    result = sub(a);
    cout << " result 2 : " << result << endl;
    return 0;


    // output will be 80 , 100 !

    }
