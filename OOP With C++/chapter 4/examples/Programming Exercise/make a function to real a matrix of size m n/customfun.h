#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int i=0;

 void matfun(double t,int m,int n){

    const int row=m;
    const int column=n;

    double singledimarray[m*n+2]; // size of array is given more (2 elements more)
    double twodimarray[row][column];

// converting values into one D array

    if(i<m*n){ // i for index of arrays ,
            singledimarray[i]=t;
            cout <<singledimarray[i] << " ";
        return; // it will return until array is full
    }else{
        //prompt
    cout << endl << endl << "welcome to matrix(finally! XD) : " << "m ="<<row << " n ="<<column<< endl;

    int k=0; // it will summon values of one D

                    cout << endl;

                    for(int l=0;l<row;l++){

                        for(int j=0;j<column;j++){

                                    twodimarray[l][j]=singledimarray[k+j];
                                    cout<<twodimarray[l][j]<< " ";
                                }
                        k=k+n;

                        cout << endl;
                    }
        }

        return;
    }
