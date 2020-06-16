#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef map<string,int> phonemap;

int main(){
    string name;
    int number;
    phonemap phone;

    cout << "Enter 3 set of name and numbers : \n";
    for(int i=0;i<3;i++){
        cin>>name;
        cin>>number;
        phone[name] = number; // put them in map
    }

    phone["jacob"]=4444; // insert jacob
    phone.insert(pair<string,int>("Bose",5555));

    int n = phone.size();
    cout << "Size of Map : " << n << endl;

    cout << "Lists of telephone number : " << endl;
    phonemap :: iterator itr;
    for(itr=phone.begin();itr != phone.end();itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout << "\n";
    cout << "Enter name : ";cin>> name;
    number = phone[name];

    cout << "Number : " << number <<endl;
    return 0;
}
