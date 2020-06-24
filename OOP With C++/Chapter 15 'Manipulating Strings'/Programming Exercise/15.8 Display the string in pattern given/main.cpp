#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a("1234567891011121314");
    const int s = (a.size())/2+1;
    string pattern[s];
    string final_pattern[s];

    for(int i=0;i<s;i++){
        for(int j=i;j<=(2*i);j++){
            pattern[i].push_back(a.at(j));
            pattern[i].push_back(' ');
        }
    }

    for(int i=0;i<s;i++){
        for(int j=0;j<=2*((s-1)-i);j++){
            pattern[i].insert(pattern[i].begin(),' ');
            final_pattern[i]=pattern[i];
    }
    }

    for(int i=0;i<s;i++){
            reverse(pattern[i].begin(),pattern[i].end());
            pattern[i].erase(pattern[i].begin(),pattern[i].begin()+3);
        }


    for(int i=0;i<s;i++){
            final_pattern[i].append(pattern[i]);
        }

    for(int i=0;i<s;i++){
        cout << final_pattern[i] << endl;
    }

    return 0;
}
