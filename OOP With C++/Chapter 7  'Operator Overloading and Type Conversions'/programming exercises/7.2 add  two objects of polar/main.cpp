#include<iostream>
#include<cmath>

using namespace std;

class polar{
    float radius;
    float angle;
public:
    polar(){

    }

    polar(float r,float a){
        radius =r;
        angle =a;
    }

    polar operator+(polar a);

    void show(){
        cout << "Radius : " << radius << " " << "Angle : " <<angle << endl;
    }
};

    polar polar::operator+(polar a){

        float x,y,x1,y1,x2,y2;

        x1 = radius*cos(a.angle*3.14159/180);
        y1 = radius*sin(a.angle*3.14159/180);

        x2 = a.radius*cos(a.angle*3.14159/180);
        y2 = a.radius*sin(a.angle*3.14159/180);

        x = x1 + x2;
        y = y1 + y2;

        cout << x << " " << y1 << " ";
        polar temp;
        int div = y/x;

        temp.radius = sqrt((pow(x,2)+pow(y,2)));
        temp.angle = atan(y/x)*180/3.1415;

        return temp;
        }

int main(){

    polar op1(20,30);
    polar op2(20,30);
    polar op3;

    op3 = op1 + op2;

    op3.show();
    return 0;
}
