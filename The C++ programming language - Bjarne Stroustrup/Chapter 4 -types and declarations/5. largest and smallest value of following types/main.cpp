#include<iostream>
#include <limits>
#include <iomanip>
using namespace std;

template<class T> void printMAX(const T maxx,const T minn, const char* tName){
        cout <<setw(15)<< tName <<setw(20)<< minn <<setw(20)<< maxx <<setw(20)<< hex <<"0x" << maxx << dec << endl;
}

template<> void printMAX<char>(const char maxx,const char minn, const char* tName){
        cout <<setw(15)<< tName<<setw(20)<< short(minn)<<setw(20)<< short(maxx)<<setw(20)<< hex <<"0x" << short(maxx)<< dec << endl;
}

template<class T> void limit(const char* tName){
        printMAX<T>(numeric_limits<T>::max(),numeric_limits<T>::min(),tName);
    }

int main(){
    cout <<setw(15)<< "Type name" <<setw(20)<< "Min Range"<<setw(20)<< "Max Range"<<setw(20)<< "Hexadecimal" << endl;
    limit<char>("char");
    limit<short>("short");
    limit<int>("int");
    limit<long>("long");
    limit<float>("float");
    limit<double>("double");
    limit<long double>("long double");
    limit<unsigned>("unsigned");

    return 0;
}
