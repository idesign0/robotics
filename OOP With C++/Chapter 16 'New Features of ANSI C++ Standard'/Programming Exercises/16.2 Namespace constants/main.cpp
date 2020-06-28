#include<iostream>
using namespace std;

namespace constants{
    const int i=10;
    const char* name="hii";
}

int main(){
    using namespace constants;

    cout << i << endl;
    cout << name << endl;

    return 0;
}
