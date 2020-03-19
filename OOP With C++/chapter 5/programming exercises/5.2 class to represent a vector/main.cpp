#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class vectors{
    float *vectorarray;
    int elements;

public :
        vectorfun();
        scalar_multiply();
        modify_vector();
        vectordisplay();
};
    int vectors::vectorfun(){
        cout << "*********************************************************" << endl;
        cout << " Function to Add vectors : \n\n";
        srand(time(0));
        cout << " Enter the number of float values you want to enter : " ;
        cin >> elements ;

            vectorarray = new float[elements];
                cout << "\n Enter Your Float values One by one : " << endl ;

            for(int i=0;i<elements;i++){
            vectorarray[i] = rand()%9+1;
            cout <<" "<< i<<" float value : " << vectorarray[i] <<endl;
            }
    cout << "*********************************************************" << endl;
    }


    int vectors::scalar_multiply(){
        cout << "*********************************************************" << endl;
        cout << " Function to Multiply scalar : \n\n";
        cout << " Enter the scalar you want to multiply with : ";
        float scalar;
        cin >> scalar;
        for(int i=0;i<elements;i++){
            vectorarray[i]=vectorarray[i]*scalar;
            }
    cout << "*********************************************************" << endl;


    }

    int vectors::modify_vector(){
         cout << "*********************************************************" << endl;
        cout << " Function to modify list vector : \n\n";
            cout << "\n Enter index number you want to modify : " ;
            int index;
            cin >> index;
             for(int i=0;i<elements;i++){
                if(index==i){
                    cout << " What value you want to give : ";
                    int new_value;
                    cin >> new_value;
                    cout << " Vector value of index "<< index << " modified from " << vectorarray[i] ;
                        vectorarray[i]=new_value;
                    cout << " to " << vectorarray[i]<<endl;
                break;
                }

            }
         cout << "*********************************************************" << endl;
    }


    int vectors::vectordisplay(){
        cout << "*********************************************************" << endl;

        cout << " Function to Display vectors : \n\n";
        int swapp=1;
        while(swapp !=0){
            swapp = 0;
            for(int i=0;i<elements-1;i++){
                if(vectorarray[i]>vectorarray[i+1]){
                    float temp =  vectorarray[i];
                    vectorarray[i] = vectorarray[i+1];
                    vectorarray[i+1] = temp ;
                swapp = 1;

            }
            }
            }
        cout << "\n Elements of vectors : " << endl ;
        cout << "(";
         for(int i=0;i<elements;i++){
            cout << vectorarray[i] << ",";
            }
         cout <<"...)"<<endl;
    cout << "*********************************************************" << endl;
    }

int main(){

    vectors varray;
    int choise ;

    while(choise!=5){
                cout << "You can choose Following options : \n";
                cout << "\n 1.make a new vector";
                cout << "\n 2.modify vector";
                cout << "\n 3.scale the vector";
                cout << "\n 4.Display vector";
                cout << "\n 5. Quite\n";
                cout << "\n What is your Option : ";

                cin >> choise ;
                switch(choise){
                    case 1 : varray.vectorfun();break;
                    case 2 : varray.modify_vector();break;
                    case 3 : varray.scalar_multiply();break;
                    case 4 : varray.vectordisplay();break;
                    case 5 : break;
                    default : "choice is invalid ; select appropriate number !"
                }
    }




    return 0;

    }
