#include<iostream>
#include<cmath>
using namespace std;

class polar{
    float angle;
    float radius;
public:
    polar(){}
    polar(float a,float r){
        angle = a*3.14/180;
        cout << angle;

        radius = r;
    }

    float get_angle(){return angle;}
    float get_radius(){return radius;}

/*    operator rectangle(){
        rectangle c;
        c.x = r*cos(angle*3.14159/180);
        c.y = r*sin(angle*3.14159/180);
        return c;
    }
*/

  /*  polar(rectangle &r){
        angle = atan(r.get_y()/r.get_x())*180/3.14;
        radius = sqrt((pow(r.get_x(),2)+pow(r.get_y(),2)));
    }
*/
    void show(){
    cout << "Angle : "<< angle << " Radius : " <<radius<<endl;
    }
};
class rectangle{
    float x;
    float y;
public:
    rectangle(){}
    rectangle(float a,float b){
        x = a;
        y = b;
    }

    float get_x(){return x;}
    float get_y(){return y;}

    rectangle(polar &p){
        float radi = p.get_radius();
        float angle = p.get_radius();

        x = (radi)*(cos(angle));
        y = (radi)*(sin(angle));
    }

    void show(){
    cout << "X : "<< x << " Y : " <<y<<endl;
    }
};

int main(){
    polar P(90,30);
    rectangle R(50,50);



    P.show();
    R.show();

    R=P;
    P.show();
    R.show();

    return 0;
}
