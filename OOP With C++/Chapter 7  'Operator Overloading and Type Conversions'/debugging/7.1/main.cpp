#include<iostream>
using namespace std;

class space{
    int mcount;
public:
    space(){
        mcount=0;
    }

    space operator++(){
        mcount++;
        return
        }
    void show(){
    cout << mcount;}
};

int main(){
    space objspace;
    ++objspace;
    objspace.show();
}
