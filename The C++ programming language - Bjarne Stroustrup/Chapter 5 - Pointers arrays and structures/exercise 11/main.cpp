#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;
int main(){
    string s;
    vector<string> str;
    set<string> sortedwords;
    cin >> s;

    while(s!="Quit"){
        if(sortedwords.insert(s).second){
            str.push_back(s);
        }
        cin >> s;
    }

    for(int i=0;i<str.size();i++){
        cout << str[i] << " ";
    }

    typedef set<string> :: const_iterator itr;
    itr i= sortedwords.begin();

    cout << endl;
    for(i;i!=sortedwords.end();i++){
    cout << *i <<" ";
    }
    return 0;
}
