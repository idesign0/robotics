#include<iostream>
#include<cmath>
using namespace std;

class shape{
protected:
    double width;
    double height;
    double area;
public:
    void get_data(double w,double h=0){
        width =w;
        height = h;
    }
    virtual void display_area(){
              area = (width*height*1/2);
                cout << "Area of Triangle : " << area << endl;
    }
};

class triangle:public shape{
public:
};

class rectangle:public shape{
public:
    void display_area(){
        area = width*height;
                cout << "Area of Rectangle : " << area << endl;
    }
};

class circle:public shape{
public:
    void display_area(){
        area = 3.14159*pow(width,2);
                cout << "Area of Rectangle : " << area << endl;
    }
};


int main(){
    triangle o_triangle;
    rectangle o_rectangle;
    circle o_circle;

    o_triangle.get_data(5,5);
    o_rectangle.get_data(10,10);
    o_circle.get_data(10);

    shape *sptr[3]={&o_rectangle,&o_triangle,&o_circle};

    sptr[0]->display_area();
    sptr[1]->display_area();
    sptr[2]->display_area();

    return 0;
}

//comments

//by removing the display_area() function from the triangle class i cant use pure virtual function in base class
/*  because compiler will go back to virtual display area if it will not able to find it in derived class
    if i declared display_area() as pure virtual function then it will do nothing and compiler will generate error.
*/
/*
    so if i put some definition in virtual function it will execute if compiler could not able to find function in derived class!
*/
