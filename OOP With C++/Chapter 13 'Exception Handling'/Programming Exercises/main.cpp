#include<iostream>
using namespace std;
const int sizee=5;
int main(){
    int arr[sizee]={0,1,2,3,4};
        int i=0;
        try{
            while(1){
                if(i==sizee)
                    throw 1;
                else
                    cout << "arr[" <<i<<"] = " << arr[i] << "\n";
                    i++;
                }
            }catch(int){
                cout << "Out of Range : Index\n";
            }
    return 0;
}
