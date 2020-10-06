#include<iostream>
#include<string>

using namespace std;

#define NUM_OF_MONTHS 12

void print_months(string s[]){
    for(int i=0;i<NUM_OF_MONTHS;i++){
    cout << s[i] << "\n";
    }

}

int main(){
    string months[]={"jan","feb","march","april","may","jun","july","aug","sep","oct","nov","dec"};
    print_months(months);

    return 0;
}
