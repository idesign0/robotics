#include<iostream>
#include<string>

using namespace std;

int main(){
    // creating string objects
    string s1; // empty string object
    string s2(" New"); // using string constant
    string s3(" Delhi");

    // assigning values to string objects

    s1=s2; // using string object

    cout << "s1 : " << s1<<"\n";

    s1="Standard C++"; // using string object
    cout << "Now s1 : " << s1<<"\n";

    string s4(s1);
    cout << "Now s4 : " << s4<<"\n\n";

    // reading through keyboard
    cout << "Enter a string : " ;
    cin>> s4;
    cout << "Now s4 : " << s4<<"\n\n";

    //concatenating string
    s1=s2+s3;
    cout <<"S1 finally contains : " << s1 <<"\n";
    return 0;
}
