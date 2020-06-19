#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    list<int> list_odd(5); // making empty list
    list<int> list_even(5);

    list<int> ::iterator p = list_even.begin(); // creating bidirectional iterator

    //initializing odd and even lists

    cout << "Fill the Even list : ";
    for(p;p!=list_even.end();p++){
        int x;
        cin >> x;
        *p=x;
    }
    cout << endl;

    p = list_odd.begin();
    cout << "Fill the Odd list : ";
    for(p;p!=list_odd.end();p++){
        int x;
        cin >> x;
        *p=x;
    }
    cout << endl;

    // sorting lists in incrementing order

    list_odd.sort();
    list_even.sort();

    cout << "Even list : ";
    p = list_even.begin();
    for(p;p!=list_even.end();p++){
        cout << *p << " ";
    }
    cout << endl;
    cout << "Odd list : ";
    p = list_odd.begin();
    for(p;p!=list_odd.end();p++){
       cout << *p << " ";
    }
    cout << endl;

    // merging list

    list_even.merge(list_odd);

    cout << "Merged list : ";
    p = list_even.begin();
    for(p;p!=list_even.end();p++){
       cout << *p << " ";
    }
    cout << endl;

    //creating vector
    vector<int> v(list_even.begin(),list_even.end());
    copy(list_even.begin(),list_even.end(),v.begin());

    cout << "Vectors : " ;
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
