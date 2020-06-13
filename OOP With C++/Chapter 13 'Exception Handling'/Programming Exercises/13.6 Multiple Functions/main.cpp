#include<iostream>
using namespace std;

class operations{
    double x;
    double y;
public:
    void read(){
        cout << "Add two values of x and y : "; cin >> x >> y;
    }
    void division(){
        try{
            if(cin.fail()){
                throw "Bad input!";
            }
            else if(y==0){
                throw y;
            }else
                cout << "DIVISION : x/y : " << x/y << endl;
        }catch(const char*str){
            cout << str;
        }catch(double){
            cout << "Division is zero !";
        }
    }
};
int main(){
    operations o;
    o.read();
    o.division();
}
