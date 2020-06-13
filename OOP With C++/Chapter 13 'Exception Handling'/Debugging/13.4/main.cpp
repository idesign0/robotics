#include<iostream>
using namespace std;

class p{
public:
    p(){
        cout << "Inside the constructors\n";
        try{
            throw "m";
        }catch(...){
            cout << "What is this !\n";
        }
        cout << "Still inside the constructors \n";
    }
    ~p(){
        cout << "inside the destructor\n";
    }
};

int main(){
    try{
        p var;
        throw "Q";
    }catch(...){
        cout << "Exception : Ends \n";
    }
    cout << "Exit point \n";
    return 0;
}
