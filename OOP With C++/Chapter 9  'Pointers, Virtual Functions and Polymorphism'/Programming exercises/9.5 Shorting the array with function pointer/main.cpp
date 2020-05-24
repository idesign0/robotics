#include<iostream>
using namespace std;

typedef (*p_funpointer)(int,int *);

int sortingfun(int n,int *p){
    int i,j,t;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]<p[j]){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
        }
    }
}
}
int main(){
    int arr[10]={1,5,7,6,5,1,3,9,1,8};
    p_funpointer p_sort;
    p_sort = &sortingfun;

    p_sort(10,arr);

    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
