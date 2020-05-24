/*
sample mean , variance and deviation
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

float samplemean(int);
float differencefun(int,float);
void printfunction(int,float,float,float);

int * pinputvalue = new int; // array for input values
float * pdiffernce = new float; // array for difference

int main(){
    int n=10;
        srand(time(0));

// sample mean section
        float xbar = samplemean(n);

// variance section
        float totaldifference;

        for(int i=1;i<=n;i++){

        *(pdiffernce+i)= differencefun(*(pinputvalue+i),xbar);


        totaldifference += *(pdiffernce+i);
        }

        float variance = totaldifference/n;

// standard Deviation

        float stddeviation = sqrt(variance);

// printing values

        printfunction(n,xbar,variance,stddeviation);

        delete pinputvalue;
        delete pdiffernce;
}

float samplemean(int n){

        float outputvalue = 0;

        for(int i=1;i<=n;i++){

            int inputvalue = rand()%15;

            *(pinputvalue + i) = inputvalue;

            outputvalue += inputvalue;
        }

        outputvalue = outputvalue/n;
        return outputvalue;


}

float differencefun(int input , float mean){
        float difference = pow(input - mean,2);
        return difference;
}

// for printing

void printfunction(int n,float xmean,float variance,float stddeviation){
    cout <<setw(20)<< " Input Value -> ";

    for(int i=1;i<=n;i++){
        cout <<setw(12)<<*(pinputvalue +i) << " ";
    }

    cout <<setw(20)<< "\n Difference Value -> ";

    for(int i=1;i<=n;i++){
        cout <<setw(12)<<*(pdiffernce +i) << " ";
    }

    cout <<setw(20)<< "\n\n Mean Value -> "<<setw(8)<<xmean<<setw(20)<< "\n Variance Value -> "<<setw(8)<<variance<<setw(8)<<" \n Standard Deviation Value -> "<<stddeviation<<endl<<endl;


}
