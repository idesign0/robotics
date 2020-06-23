#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    char *name_1 = "hggg";
    char * name_2 = "hkk";

    //lexicographical_compare will give true if first is less then 2

//    int x = lexicographical_compare(name_1,name_1 + 14,name_2,name_2+3);
//    cout << x;

    if(lexicographical_compare(name_1,name_1 + 14,name_2,name_2+3)){
            cout << "Name 1 is less then name 2";
       }
       else{
        cout << "Name 1 is bigger than name 2 ";
       }
    return 0;
}
