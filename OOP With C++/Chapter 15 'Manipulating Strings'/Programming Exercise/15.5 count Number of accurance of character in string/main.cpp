#include<iostream>
#include<string>

using namespace std;

int main(){
    char character[] = {'i'};

    string str = "Hii i am Dhruv patel";
    int countt=0;

    for(int i=0;i<str.size();i++){
        if(str.at(i)==character[0]){
            countt++;
        }
    }

    cout << "Word " << character[0] << " appear : " << countt << " times.";
    return 0;
}
