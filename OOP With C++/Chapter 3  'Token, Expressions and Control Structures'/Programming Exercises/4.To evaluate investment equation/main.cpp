/*
evaluate the investment equation
v = p(1+r)^n
and make table for difference values of p , r , n.

P = Principal amount ;
v = value of money;
n = years;
r= rate of interest

at first year
v = p(1+r)
v=p

(at end of first year)
*/

// using for loops

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){/*
        int n,p;
        float r,v;

         for(r=0.1;r<=0.2;r+=0.01){

            for(p=1000;p<=10000;p+=1000){


                cout << endl<<"if P : "<< p <<" r : "<< r << " Then valuea are : " <<endl<<endl;

                for(n=0;n<=10;n++){

                    v = p*pow(r+1,n);

                cout <<setw(50)<<n<<"th year value for money : " << v << endl;

                }
            }

        }*/
//using parallel array technique
        float minValuen;
        float rateOfincrementn;
        float maxValuen;
//for years


        cout << "Enter Value for years : Min value(n) : Max value(n) : Rate of increment(n)" << endl;
        cin >> minValuen >> maxValuen >> rateOfincrementn;

        int sizee=maxValuen/rateOfincrementn;
        int * years = new int[sizee];

        for(int n = minValuen ; n <= maxValuen ; n = n + rateOfincrementn){

                *(years+n)=n;

        }



//using parallel array technique
        float minValuep;
        float rateOfincrementp;
        float maxValuep;
// for initial Values of money
        cout << endl <<"Enter Value for initial money value : Min value(p) : Max value(p) : Rate of increment(p)" << endl;
        cin >> minValuep >> maxValuep >> rateOfincrementp;
        float * pp = new float[sizee];
        float p = 0 ;
        for(int n = minValuen ; n <= maxValuen ;n = n + rateOfincrementn){


                p = p + rateOfincrementp;
                *(pp+n)=p;

        }

        //using parallel array technique
        double miValuer;
        double rteOfincrementr;
        double maValuer;
// for rates
        cout << endl <<"Enter Value for rate of interest : Min value(r) : Max value(r) : Rate of increment(r)" << endl;
        cin >> miValuer >> maValuer >> rteOfincrementr;
        double r = miValuer;
        double * pr = new double[sizee];
        for(int n = minValuen ; n <= maxValuen ; n = n + rateOfincrementn){


                r = r + rteOfincrementr;
                *(pr+n)=r;

        }


       cout <<endl<< setw(15)<<setw(15)<< "Rate of Increment"<< setw(15)<< "Initial value "<<setw(15)<<setw(15)<<setw(15)<<"10th year money VALUE :"<< endl<<endl;

        for(int n = minValuen ; n <= maxValuen ; n = n + rateOfincrementn){
                    float pop = *(pp+n);
                    double por = *(pr+n);
                    float poy = *(years+n);

                    float v = pop*pow(por+1,poy);

            cout << setw(15)<<setw(15) << *(pr+n) <<setw(15)<< *(pp+n) <<setw(15)<<setw(15)<< v << endl;

        }

        delete [] years;
        delete [] pp;
        delete [] pr;

       }
