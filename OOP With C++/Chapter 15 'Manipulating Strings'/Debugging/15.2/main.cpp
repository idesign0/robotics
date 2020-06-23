#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("He live in India");
    string s2("He is happy");
    string s3 = s1.substr(7,9);

    s2.insert(11,s3);
    cout << s2 << endl;
    return 0;
}
