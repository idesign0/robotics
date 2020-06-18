#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1;

    l1.push_front(10);
    l1.push_back(20);
    l1.push_front(30);
    l1.push_front(40);
    l1.push_back(10);
    l1.pop_front();

    list<int>::iterator p=l1.begin();
    for(p;p!=l1.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    l1.reverse();

    p=l1.begin();
    for(p;p!=l1.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    l1.unique();

    p=l1.begin();
    for(p;p!=l1.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}
