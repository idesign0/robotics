#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("What will happen ?");
    s1.pop_back();
    cout << s1 << "\n";

    cout << "Capacity of string : " << s1.capacity() << endl;

    s1.resize(10);
    cout << "Capacity of string : " << s1.capacity() << endl;

    s1.shrink_to_fit(10);
    cout << "Capacity of string : " << s1.capacity() << endl;

    return 0;
}
