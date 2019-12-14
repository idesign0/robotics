#include <iostream>
using namespace std;

char * allocatememory(char);

int main() {
    char c;
    char* pstr = new char[20];

    pstr = allocatememory(c);

    cout << pstr;

    delete pstr;

    pstr = " ";

    cout << pstr ;
}

char * allocatememory(char c){
    char * a= &c;

    a = "Memory allocation test ";

     return a;
}
