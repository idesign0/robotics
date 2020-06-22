#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("ABC");
    string s2("XYZ");
    string s3 = s1 + s2 ;

    if(s1!=s2)
        cout << s1 << " is not equal to " << s2 << endl;

    if(s1>s2){
        cout << s1 << " is greater then " << s2 << endl;
    }else{
        cout << s1 << " is less then " << s2 << endl;
    }

    if(s3==s1+s2){
        cout << s3 << " is equal to " << s1+s2 << endl;
    }

    int x =  s1.compare(s2);

    if(x==0)
        cout << "s1" << " = " <<"s2"<<endl;
    if(x>1)
        cout << "s1" << " > " <<"s2"<<endl;
    if(x<1)
        cout << "s1" << " < " <<"s2"<<endl;

    return 0;
}
