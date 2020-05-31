#include<iostream>
#include<fstream>

using namespace std;

int main(){
    const int sizee=100;
    char buf[sizee] = "sadadsadas";
    int i=0;

    ifstream in("chll_1.cpp");
    ofstream out("chll_1temp.cpp");

    while(out){
        out.put(buf[i]);
        i++;
    }
    return 0;
}
