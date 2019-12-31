#include <iostream>

using namespace std;

inline float mul(int,int);
inline float der(int,int);

int main(){
    int a=4,b=3;

    int multiplication = mul(a,b);
    float derivation = der(a,b);

    cout << multiplication << " " << derivation;

    return 0;
}
inline float mul(int a,int b){
    return a*b;
}
inline float der(int a,int b){
    return (float)a/b;
}
