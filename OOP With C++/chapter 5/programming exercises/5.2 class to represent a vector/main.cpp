#include<iostream>
using namespace std;

class vectors{
    float *vectorarray;
    int elements;

public :
    int vectorfun(){
        cout << "*********************************************************" << endl;
        cout << "Function to Add vectors : \n\n";
        cout << "Enter the number of float values you want to enter : " ;
        cin >> elements ;

            vectorarray = new float[elements];
                cout << "\n Enter Your Float values One by one : " << endl ;

            for(int i=0;i<elements;i++){
            cout << i+1<<" float value : " ; cin >> vectorarray[i] ;
            }
    cout << "*********************************************************" << endl;
    }

    int scalar_multiply(){
        cout << "*********************************************************" << endl;
        cout << "Function to Multiply scalar : \n\n";
    }

    int vectordisplay(){
        cout << "*********************************************************" << endl;

        cout << "Function to Display vectors : \n\n";

        cout << "\n Elements of vectors : " << endl ;
         for(int i=0;i<elements;i++){
            cout << i+1<<" float value : " << vectorarray[i] << endl;
            }
    cout << "*********************************************************" << endl;
    }

};

int main(){
    vectors varray;
    varray.vectorfun();
    varray.vectordisplay();

    return 0;

    }
