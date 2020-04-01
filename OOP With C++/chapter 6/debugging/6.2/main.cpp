#include <iostream>

using namespace std;
class cube{
    int length;
    int breadth;
    int width;
public :
    cube():length(5),breadth(5),width(5){}
    cube(int l, int b,int w): length(l),breadth(b),width(w){}

    int area_of_cube(){
        return length*breadth;
    }

    int volume_of_cube(){
        return length*breadth*width;
    }

    void display(int temp){
        cout << temp << endl;
    }
};

int main()
{
    cube A1(4,4,4),B1;
    int temp;

    cout << "Default Area " << endl;
    temp=B1.area_of_cube();
    A1.display(temp);

    cout << "Default Volume " << endl;
    temp=B1.volume_of_cube();
    A1.display(temp);

    cout << "Area when argument is 4 : " << endl;
    temp = A1.area_of_cube();
    A1.display(temp);

    cout << "Volume when argument is 4 : " << endl;
    temp = A1.volume_of_cube();
    A1.display(temp);
    return 0;
}
