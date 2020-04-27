#include<iostream>
using namespace std;

class student{
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
        cout << "Marks obtain : " <<endl
             << " Part1 = "<<part1<<endl
             << " Part2 = "<<part2<<endl;
        }
};

class sports{
protected:
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
    float total;
public:
    void display(){
        total = part1 + part2 + score;
        put_number();
        put_marks();
        put_score();

        cout << "Total score : "<<total <<endl;
   }
};

int main(){
    result student;
    student.get_number(1232);
    student.get_marks(15.20,15.20);
    student.get_score(6.0);
    student.display();
    return 0;
}
