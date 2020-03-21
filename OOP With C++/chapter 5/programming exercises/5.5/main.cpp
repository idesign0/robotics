#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

                cout << "You can choose Following options : \n";
                cout << "\n 1.Make a new vector";
                cout << "\n 2.Modify vector";
                cout << "\n 3.Scale the vector";
                cout << "\n 4.Add vector";
                cout << "\n 5.Display vector";
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
