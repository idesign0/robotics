#include<iostream>
#include<string>

using namespace std;

int main(){

    char shorting[]={'B','C','A'};
    string names[5];

    names[0]="Chan";
    names[1]="Book";
    names[2]="Arial";
    names[3]="Banana";
    names[4]="Zoom";

    for(int j=0;j<(sizeof(shorting)/sizeof(char));j++){
        for(int i=0;i<5;i++){
            if(names[i].at(0)==shorting[j]){
            cout << names[i] << endl;
        }
    }
    }

    return 0;
}
