#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;


int main(){
    vector<string> words;
    set<string> sortedwords;

    string s;

    while(s!="Quit"){
            if(sortedwords.insert(s).second)
                words.push_back(s);
        cin >> s;
    }

    cout << "In entered Words : " << endl;
    for(int i =0;i<words.size();i++){
        cout << words[i]<<" ";
    }

    cout << "\n\nIn sorted Words : " << endl;
    for(set<string>::const_iterator itr =sortedwords.begin();itr!=sortedwords.end();itr++){
        cout << *itr<<" ";
    }

    return 0;
}
