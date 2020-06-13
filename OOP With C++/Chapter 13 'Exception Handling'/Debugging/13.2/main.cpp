#include<iostream>
using namespace std;

void practical(int x){
    try{
        if(x==1){
        throw 20;
        }else
            if(x==2)
                throw 30;
            else
                throw 'C';
    }
    catch(int e){
        cout << "Exception caught : " <<e <<endl;
    }
    catch(...){
        cout << "Exception caught : Unknown\n";
    }
}

int main(){
    practical(1);
    practical(2);
    practical(3);
    return 0;
}
