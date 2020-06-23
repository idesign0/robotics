#include<iostream>
#include<string>

using namespace std;

void display(string &str){
    cout << "Size : " << str.size() << endl;
    cout << "Length : " << str.length() << endl;
    cout << "Capacity : " << str.capacity() << endl;
    cout << "Maximum Size : " << str.max_size() << endl;
    cout << "Empty : " << (str.empty() ? "yes" : "no")<< endl;
    cout << endl << endl;
}

int main(){
    string str1;

    cout << "Initial status : " << endl;
    display(str1);

    cout << "Enter a string (One word) : " << endl;
    cin >> str1;
    cout << "Status One : " << endl;
    display(str1);

    str1.resize(15);
    cout << "Status after resizing : " << endl;
    display(str1);

    return 0;
}
