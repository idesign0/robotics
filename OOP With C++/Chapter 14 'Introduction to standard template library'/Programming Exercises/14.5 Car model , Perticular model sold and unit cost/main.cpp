#include<iostream>
#include<map>
#include<list>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;

class car_class{
    string car_name;
    int model_sold;
    int unit_cost;
public:
    car_class(){}
    car_class(string car_n,int sold,int cost){
        car_name=car_n;
        model_sold=sold;
        unit_cost=cost;
    }
    void display(){
        cout << "Car name : " <<setw(15)<< car_name << "\tModel sold : " <<setw(15)<<model_sold<< "\tUnit cost : "<<setw(15)<<unit_cost<<endl;
    }
};

typedef vector<car_class> vec;
typedef list<car_class> lists;
typedef map<car_class,int> map_car;


int main(){

    //using vectors
    vec v;
    v.push_back(car_class("Maruti suzuki",500,100000));
    v.push_back(car_class("Baleno",2000,1500000));
    v.push_back(car_class("Artiga",120,500000));
    v.push_back(car_class("i20",200,1000000));
    v.push_back(car_class("i10",1500,800000));

    for(int i=0;i<v.size();i++){
            v[i].display();
    }
    cout << endl;
    //using lists
    lists li;
    li.push_back(car_class("Maruti suzuki",500,100000));
    li.push_back(car_class("Baleno",2000,1500000));
    li.push_back(car_class("Artiga",120,500000));
    li.push_back(car_class("i20",200,1000000));
    li.push_back(car_class("i10",1500,800000));

    lists ::iterator p = li.begin();
    for(p;p!=li.end();p++){
            p->display();
    }
    cout << endl;


    return 0;
}
