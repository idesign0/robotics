#include<iostream>
#include<string>

using namespace std;

class ABC{
private :
    mutable int m;
public:
    explicit ABC(int x=0){
        m=x;
    }
    void change() const{ // constant function
        m+=10;
    }
    int display() const{ // constant function
        return m;
    }
};

int main(){
    const ABC abc(100);
    cout << "abc contains : "<< abc.display();

    abc.change();
    cout << "\nabc now contains : "<< abc.display();
    return 0;
}
