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
    cout<<setw(10)<<name
        <<setw(10)<<code
        <<setprecision(2)
        <<setw(10)<<cost
        <<endl;
    }

int main(){
    inventory item;
    fstream inoutfile; // input/output stream

    inoutfile.open("Stock.dat", ios::ate | ios:: in | ios::out | ios::binary);
    inoutfile.seekg(0,ios::beg); // go to start

    cout << "Current contents of stock : " << "\n";

    while(inoutfile.read((char *) &item,sizeof item)){
        item.writedata();
    }

    inoutfile.clear(); // turn of EOF flag

/*>>>>>>>>>>>>>>>>>>>>>> Add one more item <<<<<<<<<<<<<<<<<<<<*/

    cout <<"\nADD AN ITEM\n";

    item.readdata();
    char ch;
    inoutfile.write((char*)&item,sizeof(item));

    // display the appended file

    inoutfile.seekg(0);

    cout << "Contents of appended file\n";

    while(inoutfile.read((char*)&item,sizeof(item))){
        item.writedata();
    }

    //find number of objects in the file

    int last = inoutfile.tellg();
    int n= last/sizeof(item);

    cout << "Number of objects = " << n << endl;
    cout << "Total bytes in the file = " << last << endl;



}

