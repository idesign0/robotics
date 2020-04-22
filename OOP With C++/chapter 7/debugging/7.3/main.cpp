#include<iostream>
using namespace std;

class room{
    float mwidth;
    float mlength;
public:
    room(){
    }
    room(float w,float h):mwidth(w),mlength(h){
    }
    operator float(){
        return (mwidth*mlength);
    }

};

int main(){
    room objroom(2.5,2.5);
    float ftotalarea;

    ftotalarea = objroom ;

    cout << ftotalarea ;

    return 0;
}
