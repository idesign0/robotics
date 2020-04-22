#include<iostream>
using namespace std;

class weekdays{
    char* day;
public:

    weekdays(char * c){
        day = c;
    }

bool operator==(weekdays &w2){

    if( day==w2.day)
        return 1;
    else
        return 0;
}
};

int main(){
    weekdays w1 = "sunday", w2="monday";
    if(w1==w2)
        cout << "Same day";
    else
        cout << "Different day";

}
