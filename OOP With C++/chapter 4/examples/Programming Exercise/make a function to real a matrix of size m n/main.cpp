#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

inline void fun(double,int,int);
 void matfun(double,int,int);
//const int m = 8,n = 8;
//int  arr[m][n];

int main(){

        srand(time(0));
        double t;
        int i=1;
/*        for(int j=0;j<m;j++){
                for(int i=0;i<m;i++){
                    t = rand()%10 +1;
                    cout << t ;
                    fun(t,i,j);
                }
                }

  */
       while(i<=4){
        t = (rand()%6 +1);
        cout << t  << " ";
        matfun(t,2,2);
        i++;
       }



     /*   cout << "\n\n\n welcome to the matrix\n\n\n" << endl;
        for(int j=0;j<n;j++){
                for(int i=0;i<m;i++){
                    cout <<setw(10)<<arr[j][i];
                }
                cout << endl;
        }*/
}
/*inline void fun(double t,int i,int j){
        arr[j][i] = t;
}*/

 void matfun(double t,int m,int n){
    const int r = m;
    const int c = n;

    int *counterforRow = new int;
    int *counterforColum = new int;

    *counterforRow = 0;
    *counterforColum = 0;

    double arr[r][c];

    if(*counterforColum >= c){
        *counterforRow++;   // row index will increment by one
        *counterforColum=0; // column index will be zero
    }

    while(*counterforColum<c){
        arr[*counterforRow][*counterforColum]= t;

        *counterforColum++;
    }

    return;
}
