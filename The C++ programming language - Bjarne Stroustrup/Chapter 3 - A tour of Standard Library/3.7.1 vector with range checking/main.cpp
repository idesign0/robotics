#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Vec : public vector<T>{ // Vec class for handling exception
public :
    Vec():vector<T>(){}
    Vec(int s):vector<T>(s){}

    T & operator[](int i){
        return this->at(i);
    }

    const T & operator[](int i) const {
        return this->at(i);
    }

};

struct Entry{
    string name;
    int numbers;

    Entry(){
        cin >> name;
        cin >> numbers;
    }

    void print_name(){
        cout << this->name << " " <<this->numbers << "\n";
    }
};



int main()
{
    try{
        Vec<Entry> phone_book(1000);
        phone_book[0];
        phone_book[0].print_name();

        }catch(out_of_range){
        cout << "Range error\n";

        }catch(...){
        cout << "unknown Exception Thrown\n";
        }

        return 0;
}
