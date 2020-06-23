#include<iostream>
#include<string>

using namespace std;

int main(){
    string s("ONE TWO THREE FOUR");

    cout << "The string contains : " << endl;

    for(int i=0;i<s.length();i++){
        cout << s.at(i); // display characters
    }

    cout << "\nString is shown again : " << endl;
    for(int j=0;j<s.length();j++){
        cout << s[j]; // display characters
    }

    int x1 = s.find("TWO");
    cout << "\n\nTwo is found at : " << x1 << endl;

    int x2 = s.find_first_of('T');
    cout << "\n\nT is first found at : " << x2 << endl;

    int x3 = s.find_last_of('R');
    cout << "\n\nR is last found at : " << x3 << endl;

    cout << "\nRetrieving and print substring two \n";
    cout << s.substr(x1,3);

    return 0;
}
