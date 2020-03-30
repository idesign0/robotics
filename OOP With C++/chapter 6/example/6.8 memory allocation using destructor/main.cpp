#include <iostream>
#include <conio.h>
using namespace std;

class test{
public :

        int *a;
public:

    test(int sizee){
        a=new int[sizee];
        cout << "\n\nConstructor msg : integer array of size " << sizee << " created..";
    }
    ~test(){
        delete a;
        cout << "\n\nDestructor msg : integer array of size destroyed..";
    }
};

int main(){
    int s;
    cout << "enter size of array : ";
    cin >> s;
    cout << " \n\nCreating an object of test class .. ";
    test T(s);
    cout << "Press any key to delete program..";
    getch();


    return 0;
}
