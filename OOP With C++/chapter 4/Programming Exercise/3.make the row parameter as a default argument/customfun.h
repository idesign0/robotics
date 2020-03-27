#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int i =0;

void matfun(int n=1,int m=1);

 void matfun(int n,int m){

    const int row=m;
    const int column=n;

    int matrix[row][column];



    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cin>>matrix[i][j]>>setw(5);
        }

    }
    cout << "Here is Following Matrix : "<< endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<setw(5)<<matrix[i][j];
        }
        cout << endl;
    }

    }
