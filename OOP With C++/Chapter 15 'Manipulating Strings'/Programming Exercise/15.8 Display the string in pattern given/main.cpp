#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a("1234567891011121314");
    const int s = (a.size())/2+1;
    string pattern[s];
    string final_pattern[s];

    // added elements like this pattern first
    // 1
    // 3 2
    // 5 4 3
    // 7 6 5 4
    // 9 8 7 6 5

    for(int i=0;i<s;i++){
        for(int j=i;j<=(2*i);j++){
            pattern[i].push_back(a.at(j));
            pattern[i].push_back(' ');
        }
    }

    // added spaces like this pattern
    //         1
    //       2 3
    //     3 4 5
    //   4 5 6 7
    // 5 6 7 8 9

    for(int i=0;i<s;i++){
        for(int j=0;j<=2*((s-1)-i);j++){
            pattern[i].insert(pattern[i].begin(),' ');
            final_pattern[i]=pattern[i]; // assign it new pattern
    }
    }

    for(int i=0;i<s;i++){
            reverse(pattern[i].begin(),pattern[i].end());
            pattern[i].erase(pattern[i].begin(),pattern[i].begin()+3);
        }

// reversed the pattern
    //  1
    //  3 2
    //  5 4 3
    //  7 6 5 4
    //  9 8 7 6 5

//erased pattern

    //
    //2
    //4 3
    //6 5 4
    //8 7 6 5

    for(int i=0;i<s;i++){
            final_pattern[i].append(pattern[i]);
        }

// final patterns
    //         1
    //       2 3 2
    //     3 4 5 4 3
    //   4 5 6 7 6 5 4
    // 5 6 7 8 9 8 7 6 5

    for(int i=0;i<s;i++){
        cout << final_pattern[i] << endl;
    }

    return 0;
}
