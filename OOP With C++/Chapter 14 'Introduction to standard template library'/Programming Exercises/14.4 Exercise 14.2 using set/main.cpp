#include<iostream>
#include<vector>
#include<list>
#include<set>
#include <algorithm>

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

    // merging list

    list_even.merge(list_odd);

    cout << "Merged list : ";
    p = list_even.begin();
    for(p;p!=list_even.end();p++){
       cout << *p << " ";
    }
    cout << endl;

    //creating set

  //  p = list_even.begin();
  //  for(p;p!=list_even.end();p++){
  //      sortinglist.insert(*p);
  //  }
  //  cout << endl;

    set<int> sortinglist(list_even.begin(),list_even.end());

    set<int> :: iterator q = sortinglist.begin();
    cout << "Set : " ;
    for(q;q!=sortinglist.end();q++){
        cout << *q << " ";
    }
    return 0;
}
