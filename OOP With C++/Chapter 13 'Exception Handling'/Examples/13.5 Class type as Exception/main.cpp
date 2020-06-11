#include<iostream>
#include<string.h>
using namespace std;

class error{
    int error_cod;
    char * err_char;
public:
    error(int d,char *c){
        error_cod=d;
        err_char = new char[strlen(c)+1];
        strcpy(err_char,c);
    }
    void err_display(){
        cout << "\nError code : " << error_cod << "\n"
             << "Error description : " << err_char << "\n";
    }
};
int main(){
    try{
        cout << "Press any key to throw a test exception ";
        throw error(99,"Test Exception");
    }
    catch(error e){
        cout << "\nException caught successfully.";
        e.err_display();
    }
    return 0;
}
