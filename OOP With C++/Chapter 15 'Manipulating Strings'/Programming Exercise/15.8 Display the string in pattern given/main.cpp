#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a("123456789");
    string pattern[5];
    string final_pattern[5];

    for(int i=0;i<5;i++){
        for(int j=i;j<=(2*i);j++){
            pattern[i].push_back(a.at(j));
            pattern[i].push_back(' ');
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<2*(5-i);j++){
            pattern[i].insert(pattern[i].begin(),' ');
            final_pattern[i]=pattern[i];
    }
    }

    for(int i=0;i<5;i++){
            reverse(pattern[i].begin(),pattern[i].end());
            pattern[i].erase(pattern[i].begin(),pattern[i].begin()+3);
        }


    for(int i=0;i<5;i++){
            final_pattern[i].append(pattern[i]);
        }

    for(int i=0;i<5;i++){
        cout << final_pattern[i] << endl;
    }

    return 0;
}
