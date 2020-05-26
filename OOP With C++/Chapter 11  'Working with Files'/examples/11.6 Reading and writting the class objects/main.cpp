#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class inventory{
    char name[30];
    int code;
    float cost;
public:
    void readdata();
    void writedata();
};

void inventory::readdata(){
    cout<<"Enter name : ";cin>>name;
    cout<<"Enter code : ";cin>>code;
    cout<<"Enter cost : ";cin>>cost;
}

void inventory::writedata(){
    cout<<setiosflags(ios::right)<<setiosflags(ios::fixed)
        <<setw(10)<<name
        <<setiosflags(ios::right)
        <<setw(10)<<code
        <<setprecision(5)
        <<setw(10)<<cost
        <<endl;
    }

int main(){
    inventory item[3];
    fstream file;

    file.open("Stock.text",ios::in | ios::out  | ios::app);

    cout<<"Enter details for three items \n";
    for(int i=0;i<3;i++){
        item[i].readdata();
        file.write((char *)&item[i],sizeof(item[i]));
    }
    file.seekg(0);

    cout<<"\noutput\n\n";
    for(int i=0;i<3;i++){
        file.read((char *)&item[i],sizeof(item[i]));
        item[i].writedata();
    }
    file.close();

    return 0;
}

