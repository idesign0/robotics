#include<iostream>
#include<vector> // vector header file
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> v(5); // create a vector of type int
    cout << "Initial Size : " << v.size() << "\n";

    //putting values in vector
    int x;
    cout << "Enter 5 integer values : ";

    vector<int> :: iterator itr; // iterator
    for(itr=v.begin();itr!=v.end();itr++){
        cin>>x;
        *itr = x;
    }

    cout << "Size after adding five values : " << v.size() <<"\n";

    //Display the contents
    cout << "Current contents : " <<"\n";
    display(v);

    //add one more value
    v.push_back(6.6); // float value truncated to int

    //Display size and contents
    cout << "Display Size : " << v.size() << endl;
    cout << "Current contents : " <<"\n";
    display(v);

    //inserting elements
    itr = v.begin()+1; // iterator
    itr = itr + 3;
    v.insert(v.begin()+4,9);

    //display contents
    cout << "contents after inserting : " <<endl;
    display(v);

    //removing 4rth and 5th element
    v.erase(v.begin()+3,v.begin()+5);

    //display contents
    cout << "contents after Removing : " <<endl;
    display(v);
    cout << "END\n";
}
