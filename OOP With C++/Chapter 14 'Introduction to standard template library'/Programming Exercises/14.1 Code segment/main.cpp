#include<iostream>
#include<vector>
using namespace std;

int main(){
    //defines a vector of max size of 10
    vector<int> v(10);

    //sets first element v to 0
    v[0]=0;

    //set the last element to 9;
    v[9]=9;

    //set the remaining elements to 1
    fill(v.begin()+1,v.end()-1,1);

    //display the contents
    for(int i=0;i<v.size();i++){
        cout << v[i] << " " ;
    }

    return 0;
}
