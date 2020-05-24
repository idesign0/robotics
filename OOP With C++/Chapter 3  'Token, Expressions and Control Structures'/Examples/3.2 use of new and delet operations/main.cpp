#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int sizee;

    cout << "Enter size of array Here : " ;
    cin >> sizee;

    int * arr = new int[sizee];
    cout << "Dynamic allocation of Array of Size "<< sizee <<" is Successful"<< endl;

    for(int i=0;i<sizee;i++){
        arr[i]= rand()%1500 +1;
        }

    for(int i=0;i<sizee;i++){
        cout << i+1 <<" . "<< arr[i] << endl;
        }

}


