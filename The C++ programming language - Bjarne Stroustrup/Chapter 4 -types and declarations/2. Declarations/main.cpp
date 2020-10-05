#include<iostream>
#include<string>
#include<math.h>

// declarations and definitions of sections 4.9

double sqrt(double d){return sqrt(d);}

template <class T>
T absolute(T a){
    return abs(a);
};

int main(){
    char ch = 'c';
    std::string s = "hello world !";
    const double pi=3.1415926;
    extern int error_number;
    error_number=1;

    const char*name;
    const char*season;

    struct date{int day(date*);};


    return 0;
}
