#include<iostream>

using namespace std;

class weight{
    int leter,ML;
public :
    void getdata();
    void putdata();
    void sum_of_weight(weight,weight);
};

void weight:: getdata(){
    cout << "\nIn leter : ";
    cin >> leter;
    cout << "In ML : ";
    cin >> ML;
}

void weight :: putdata(){
    cout << leter <<" Leter and " << ML << " ml";
    }

void weight::sum_of_weight(weight w,weight m){
    ML = w.ML + m.ML;
    leter = ML/1000;
    ML=ML%1000;
    leter = w.leter + m.leter + leter ;
    }

int main(){
    weight w1,w2,w3;

    cout << "Enter the weight in Leters and ML : "<< endl;
    cout << "Enter weight 1 : ";
    w1.getdata();

    cout << "Enter weight 2 : ";
    w2.getdata();

    w3.sum_of_weight(w1,w2);

    cout << " Total weight : " ;
    w3.putdata();

    return 0;
}
