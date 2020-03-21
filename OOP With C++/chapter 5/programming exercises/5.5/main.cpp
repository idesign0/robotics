#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

                cout << "\n 6.Quite\n";
                cout << "\n What is your Option : ";

                cin >> choise ;
                switch(choise){
                    case 1 : varray.vectorfun();break;
                    case 2 : varray.modify_vector();break;
                    case 3 : varray.scalar_multiply();break;
                    case 4 : varray.addvectors();break;
                    case 5 : varray.vectordisplay();break;
                    case 6 : break;
                    default : "choice is invalid ; select appropriate number !";
                }
    }




    return 0;

    }
