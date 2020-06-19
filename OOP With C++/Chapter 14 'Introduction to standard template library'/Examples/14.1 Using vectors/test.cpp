#include<iostream>
#include<vector> // vector header file
using namespace std;

typedef vector<int> vec;

void display(vec &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main(){
    vec v(5,0); // create a vector of type int
    cout << "Initial Size : " << v.size() << "\n";

    //putting values in vector
    int x;
    cout << "Enter 5 integer values : ";

    vec :: iterator itr; // iterator
    for(itr=v.begin();itr<v.end();itr++){
        cin>>x;
        *itr = x;
    }

    cout << "Size after adding five values : " << v.size() <<"\n";

    cout << *v.begin()<<" ";
    cout << v.back()<<" ";

    itr=v.end()-1;
    cout << *itr <<" ";


}
