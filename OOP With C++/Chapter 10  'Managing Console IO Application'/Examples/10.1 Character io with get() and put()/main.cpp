#include <iostream>
 using namespace std;

 int main(){
    int countt=0;
    char c;

    cout << "INPUT TEXT : ";
    cin.get(c); // get character from keyboard
                // and assign is to c

    while(c!='\n'){
        cout.put(c); //display the character to c
        countt++;
        cin.get(c); // get another character
    }

    cout << "\nNumber of character : "<<countt<<endl;
    return 0;

 }
