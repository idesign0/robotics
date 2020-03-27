#include <iostream>


using namespace std;

enum {

    triangle,
    circle,
    eclipse,
    square,
    };

int main()
{
    cout << " enter codes : ";
    int code ;

    cin>> code;


    while(code >= triangle && code <= square){

        switch(code){

        case triangle : cout << "shape is trianle " << endl;
                        break;

        case circle : cout << "shape is circle " << endl;
                        break;


        case eclipse : cout << "shape is eclipse " << endl;
                        break;


        case square : cout << "shape is square " << endl;
                        break;

        }

        cout << " enter shape code " << endl ;
        cin >> code ;

    }

    return 0;
}
