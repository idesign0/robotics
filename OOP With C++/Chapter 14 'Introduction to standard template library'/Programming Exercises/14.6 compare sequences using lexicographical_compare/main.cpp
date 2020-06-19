#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    char *name_2 = "Hii i am dhruv";
    char * name_1 = "Hii ";

    //lexicographical_compare will give true if first is less then 2

    if(lexicographical_compare(name_1,name_1 + 4,name_2,name_2+14)){
            cout << "Name 1 is less then name 2";
       }
       else{
        cout << "Name 1 is bigger than name 2 ";
       }
    return 0;
}
