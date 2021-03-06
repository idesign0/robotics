#include<iostream>
#include<cmath>
using namespace std;

class shape{
protected:
    double width;
    double height;
    double area;
public:
    void get_data(double w,double h){
        width =w;
        height = h;
    }
    virtual void display_area()=0;
};

class triangle:public shape{
public:
    void display_area(){
        area = (width*height*1/2);
                cout << "Area of Triangle : " << area << endl;
    }
};

class rectangle:public shape{
public:
    void display_area(){
        area = width*height;
                cout << "Area of Rectangle : " << area << endl;
    }
};


int main(){
    triangle o_triangle;
    rectangle o_rectangle;

    o_triangle.get_data(5,5);
    o_rectangle.get_data(10,10);

    shape *sptr[2]={&o_rectangle,&o_triangle};

    sptr[0]->display_area();
    sptr[1]->display_area();

    return 0;
}
