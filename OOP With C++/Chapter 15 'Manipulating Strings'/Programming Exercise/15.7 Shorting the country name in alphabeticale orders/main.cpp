#include<iostream>
#include<string>

using namespace std;

void short_algo(string *c,int n){
    int swapp=1;

    for(int i=0;i<n-1;i++){
        for(int j=n-1;i<j;j--){
            if(c[i].compare(c[j])>0){
                string temp = c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
}

int main(){
    string country[5];

    country[0]="India";
    country[1]="Australia";
    country[2]="Myanmar1";
    country[3]="Afghanistan";
    country[4]="Bhutan";

    short_algo(country,5);

    for(int i=0;i<5;i++){
        cout << country[i] << endl;
    }


    return 0;
}
