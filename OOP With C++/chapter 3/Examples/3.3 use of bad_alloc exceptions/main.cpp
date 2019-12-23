#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class sample{
private:
    int Number;
    char Alphabet;

public:
    void initializer(int n,char c){
        Number = n;
        Alphabet = c;
    }

    void display(){

        cout << "Enter the Number "<< Number;
        cout << "Enter the Alphabet "<< Alphabet;

    }
};


int main(){
    sample * ptr_sml;

    try {
        ptr_sml = new sample;
    }
    catch (bad_alloc ba){
        cout << "Bad Allocation Occurred .. program will terminate now ..";
        return 1;
    }

    ptr_sml->initializer(251,'w');
    ptr_sml->display();

    delete ptr_sml;
}


