#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "Road";
    string s2 = "Read";
    string s3 = "Red";

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;

    int x = s1.compare(s2);

    if(x==0){
        cout << "S1 == S2" << endl;
    }else if(x>0){
        cout << "S1 > S2" << endl;
    }else if(x<0){
        cout << "S1 < S2" << endl;
    }

    int a = s1.compare(0,2,s2,0,2);
    int b = s2.compare(0,2,s1,0,2);
    int c = s2.compare(0,2,s3,0,2);
    int d = s3.compare(0,2,s1,0,2);

    cout << "a = " << a << endl << "b = " << b <<endl;
    cout << "c = " << c << endl << "d = " << d ;

    cout << "Before swap : " << endl;
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    s1.swap(s2);
    cout << "After swap : " << endl;
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;

    return 0;
}
