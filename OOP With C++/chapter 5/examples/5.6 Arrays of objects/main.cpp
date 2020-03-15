#include <iostream>

using namespace std;


class employee{
    char name[30];
    int age;

public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void){
    cout << "Emter Name : " ;
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
}

void employee::putdata(void){
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}

const int sizee = 3;

    int main(){

    employee manager[sizee];

    for(int i=0;i<sizee;i++){
        cout << "\nDetail of Manager "<<i+1<<endl;
        manager[i].getdata();
    }
    cout << endl;
    for(int i=0;i<sizee;i++){
        cout << "\nManager "<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;

}
