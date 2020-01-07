#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void matfun(double,int,int,int);
int i=0;

int main(){

        int m;
        int n;

        cout << "Numbers of rows : ";
        cin >> m;
        cout << "Numbers of Columns : ";
        cin >> n;

        int mul =m*n;
        double temp;
        srand(time(0));

        cout << " Random Values as Input : " << endl << endl;

        while(i<=m*n){
        temp = rand()%6 +1;
        matfun(temp,m,n,mul);
        i++;
       }
}

 void matfun(double t,int m,int n,int mul){


    double singledimarray[mul+2];
    double twodimarray[m][n];


    if(i<m*n){ // i for index of arrays
        singledimarray[i]=t;
        cout <<singledimarray[i] << " ";
        return;
    }else{
    cout << endl << endl << "welcome to matrix(finally! XD) : " << "m ="<<m << " n ="<<n<< endl;
    int k=0;
                    cout << endl;
                    for(int l=0;l<m;l++){
                        for(int j=0;j<n;j++){
                                    twodimarray[l][j]=singledimarray[k+j];
                                     cout<<twodimarray[l][j]<< " ";
                                }
                        k=k+n;
                        cout << endl;
                    }

                 /*   for(int l=0;l<m;l++){
                        for(int j=0;j<n;j++){
                  //                  cout<<twodimarray[l][j]<< " ";
                                }
                        cout << endl;
                    }*/
        }
        return;
    }


