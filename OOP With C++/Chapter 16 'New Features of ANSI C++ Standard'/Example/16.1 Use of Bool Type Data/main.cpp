#include<iostream>
#include<string>

using namespace std;

int main(){
    int arr1[5]={1,99,3,-1,6};
    int arr2[5]={0,66,3,0,6};

    bool comp[5];

    cout << "Array 1 : " ;
    for(int i=0;i<5;i++)
        cout << arr1[i] << "\t";

    cout << endl;
    cout << "Array 2 : " ;
    for(int i=0;i<5;i++)
        cout << arr2[i] << "\t";
    cout << endl;
    cout << "Comparing two Arrays : " << endl;
     for(int i=0;i<5;i++)
        comp[i]=arr1[i]==arr2[i];

    cout << "\nDisplaying the Comparison results : " << endl;
    for(int i=0;i<5;i++)
        if(comp[i]==1){
            cout << "Index " << i << " - Match" << endl;
        }else
            cout << "Index " << i << " - No Match" << endl;

    return 0;
}
