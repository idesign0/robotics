#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> phone_book;
    phone_book["xyz"]=125;
    phone_book["xy"]=12;
    phone_book["x"]=1;

    string name;
    cin >> name;

    if(int i = phone_book[name]) cout << i ;

    return 0;
}
