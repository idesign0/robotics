#include <iostream>

using namespace std;

inline int maxvalue(int,int,int);

int main(){

    int i =10,j=9,k=4;
    cout<<"Maximum value is : "<<maxvalue(10,9,4);

}

inline int maxvalue(int x,int y,int z){
    return (x>y) ? ((x>z) ? x : z) : ((y>z) ? y : z);
}



