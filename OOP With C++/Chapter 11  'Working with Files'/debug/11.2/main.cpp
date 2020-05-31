#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
    const int sizee=100;
    char buf[sizee];
    int i=0;

    ifstream in("chll_1.text");
    ofstream out("chll_1temp.text");

    if(in.fail()){
            cout << "failed _ in";
            exit(1);
    }

    if(out.fail()){
            cout << "failed _ out";
            exit(1);
    }

    in.getline(buf,50);

    in.clear();
    out.clear();

    for(int i=0;i<strlen(buf);i++){
        out.put(buf[i]);
     }

    return 0;
}
