#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef map<string,  0> phonemap;

int main(){
    string name;
    int number;
    phonemap phone;

    cout << "Enter name and number : " << endl;
    for(int i=0;i<3;i++){
        cin>>name>>number;
        phone[name]=number;
    }

    phonemap :: iterator p = phone.begin();

    //display
    cout << "Automatically sorted list : \n";
    for(p ; p!=phone.end() ; p++){
        cout << (*p).first <<"\t"<<(*p).second <<endl;
    }

    // add new details
    phone["Arjun"]=6534;

    //insert the list
    phone.insert(pair<string,int>("shivani",423));

    //display
    cout << "Automatically sorted list : \n";
    for(p=phone.begin(); p!=phone.end() ; p++){
        cout << (*p).first <<"\t"<<(*p).second <<endl;
    }

}
