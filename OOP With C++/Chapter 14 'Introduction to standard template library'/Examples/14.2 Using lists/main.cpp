#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator itr;

    for(itr=lst.begin();itr!=lst.end();++itr){
        cout << *itr << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1; // empty list of zero length
    list<int> list2(5); // empty list of size 5

    for(int i=0;i<3;i++) // filling list 1
        list1.push_back(rand()%100+1);

    list<int> ::iterator p;

    for(p=list2.begin();p!=list2.end();++p) // filling list 2
        *p=(rand()/100);

    //list 1
    p=list1.end();
    list1.insert(p,10);
    cout << "List 1 : " << endl;
    display(list1);

    //list 2
    cout << "List 2 : " << endl;
    display(list2);

    // adding elements in two ends of the lists
    list1.push_front(100);
    list1.push_back(200);

    // removing elements in list2
    list2.pop_front();

    //list 1
    cout << "List 1 : " << endl;
    display(list1);

    //list 2
    cout << "List 2 : " << endl;
    display(list2);

    list<int> listA,listB;
    listA=list1;
    listB=list2;

    //merging two list
    list1.merge(list2);
    cout << "Merged unsorted : ";
    display(list1);

    //sorting list
    listA.sort();
    listB.sort();
    listA.merge(listB);
    cout << "Merged after sorting : ";
    display(listA);

    //reverse list
    listA.reverse();
    cout << "Reversing the list : ";
    display(listA);

    return 0;
}
