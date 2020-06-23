#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("Martin ");
    string s2("Luther ");
    string s3("king ");

    string s4;

    s4 =s1 + s2;

    s4.append(s3);

    cout << s4;
    return 0;
}
