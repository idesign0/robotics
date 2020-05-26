#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

const char * filename ="Binary.text";

int main(){
    float height[4]={15.25,36.112,15.358,135.5};
    ofstream outfile(filename);

    outfile.write((char *)&height,sizeof(height));

    outfile.close();

    for(int i=0;i<4;i++){
        height[i]=0;
    }

    ifstream infile(filename);
    infile.read((char *)&height,sizeof(height));

    for(int i=0;i<4;i++){
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed);
        cout<< setw(10) << setprecision(2)<<height[i];
    }
    infile.close();

    return 0;}
