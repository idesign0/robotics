#include<iostream>
using namespace std;

class item{
    int number;
    float cost;

public :
    item(){}
    item(int a, float b){
        number=a;
        cost=b;
    }
    void display(){
        cout << "Number : " << number << "\n";
        cout << "cost : " << cost << "\n";
    }
};

int main(){

    cout << "\nobject x " << "\n";
    item x(100,299.95);
    x.display();


    cout << "\nobject y " << "\n";
    item y(200,175.50);
    y.display();

    return 0;
}
