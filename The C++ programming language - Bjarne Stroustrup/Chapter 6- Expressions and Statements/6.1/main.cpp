#include <iostream>
#define max_length 11

using namespace std;
int main()
{
    char input_line[max_length] = "ajdf?skm??";
    char *p= input_line;
    int quest_count=0;

    while(*p++!=0){
        if(*p=='?') ++quest_count;
    }

    cout << quest_count << endl;
    return 0;
}
