#include <iostream>
#include <list>
using namespace std;

struct Entry{
    string name;
    int numbers;
    Entry (){
        cin >> name;
        cin >> numbers;
    }

};

    void print_name(const string &s, list<Entry> &pb){
        typedef list<Entry> :: const_iterator LI;
        for(LI i = pb.begin(); i != pb.end(); i++){
            const Entry &e = *i;
            if(s==e.name){
                cout << e.name << " " << e.numbers << endl;
            }
        }
    }

int main()
{
    try{
        list<Entry> phone_book;

        phone_book.push_back(Entry());
        phone_book.push_back(Entry());
        phone_book.push_front(Entry());

        string name;
        cin >> name;

        print_name(name,phone_book);

        }catch(out_of_range){
        cout << "Range error\n";

        }catch(...){
        cout << "unknown Exception Thrown\n";
        }

        return 0;
}
