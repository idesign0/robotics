#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("12345");
    string s2("abcde");

    cout << "Original strings are : \n";
    cout << "S1 : " << s1 << "\n";
    cout << "S2 : " << s2 << "\n\n";

    // inserting string into another
    cout << "PLace s2 inside s1 : " <<"\n\n";
    s1.insert(4,s2);
    cout << "Modified s1 : " << s1 << endl;

    //removing characters in string
    cout << "Remove 5 character from s1 : " << endl;
    s1.erase(4,5);
    cout << "NOw s1 : " << s1 << "\n\n";

    //replacing character in string
    cout << "Replace middle 3 characters in s2 with s1 \n";
    s2.replace(1,3,s1);
    cout << "Now s2 : " << s2 << endl;

    return 0;
}
