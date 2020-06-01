#include<iostream>
#include<fstream>
using namespace std;

typedef (*functionpointer)(int,int *);

int sortingfun(int l,int *a){
    int i,j,t;
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int main(){
    ifstream if1,if2;
    functionpointer pfun;

    if1.open("source1.text");
    if2.open("source2.text");

    int sort_array[100];
    int i=0,temp;

    while(if1>>temp){
        sort_array[i]=temp;
        i++;
        }

    while(if2>>temp){
        sort_array[i]=temp;
        i++;
        }

    int length = i;

    pfun=&sortingfun;
    pfun(length,sort_array);

    fstream outfile("target.TEXT",ios::app|ios::in|ios::out);

    for(int i=0;i<length;i++){
        outfile <<"\n"<<i<< " "<<sort_array[i];
    }

  /*---------to find specific number on specific index--------*/

    /*outfile.seekg(0);

    int j,number;
    while(outfile>>j>>number){
        if(j==70){
            cout << number;
        }
    }
*/
    return 0;
}
