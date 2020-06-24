#include<iostream>
#include<string>

using namespace std;

int main(){
    string word = "It";
    int countt=0;
    string str = "It is new. It is singular.\nIt is simple. It must succeed!";
    int pos=0;
    while((pos=str.find(word,pos)) != string::npos){
        pos += word.size();
        countt++;
    }

    cout << "It comes " << countt << " times !";
    return 0;
}
