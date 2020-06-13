#include<iostream>
#include<cstring>
using namespace std;

class error{
    int err_code;
    char * err_name;
public:
    error(int a,char* b){
        err_code=a;
        err_name=new char[strlen(b)+1];
        strcpy(err_name,b);
     }
    void show(){
        cout << "err_code : " << err_code << endl
             << "err_name : " << err_name << endl;
    }
};

int main(){
    try{
        throw error(99,(char*)"Test exception !");
    }
    catch(error e){
        e.show();
    }
    return 0;
}
