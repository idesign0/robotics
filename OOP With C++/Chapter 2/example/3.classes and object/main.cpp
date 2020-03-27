#include <iostream>

using namespace std;

class person{

    char name[30];
    int age;

public :

    void getdata(void);
    void display(void);

};

void person::getdata(){

    cout << "Enter Name of yours : " ;

    cin >> name ;

    cout << "Enter age of yours : ";

    cin >> age ;

}

void person::display(){

    cout << "Person name : " << name ;

    cout << " Age : " << age ;

}

int main()
{

    person p;
    p.getdata();
    p.display();


    return 0;
}
