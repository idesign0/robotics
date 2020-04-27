#include<iostream>
using namespace std;

class student{
protected:
    int roll_number;
public:
    void get_number(int rn){roll_number=rn;}
    void put_number(){cout << "Roll Number : "<<roll_number<<endl;}
};

class test:public student{
protected:
    float part1,part2;
public:
    void get_marks(float p1,float p2){
        part1=p1;
        part2=p2;
        }
    void put_marks(){
        cout << "Marks obtain : "
             << " Part1 = "<<part1<<endl
             << " Part2 = "<<part2<<endl;
        }
};

class sports{
    float score;
public:
    void get_score(float s){
        score = s;
    }
    void put_score(){
    cout << "Score wt : "<<score<<endl;
    }
};

class result:public test,public sports{

};

int main(){

    return 0;
}
