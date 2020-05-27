#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class inventory{
    char name[30];
    int code;
    float cost;
public:
    void getdata(){
        cout << "Name : ";cin>>name;
        cout << "Code : ";cin>>code;
        cout << "Cost : ";cin>>cost;
        cout<<endl;
    }
    void putdata(){
        cout.setf(ios::fixed);
        cout<<setw(10)<<name
            <<setw(10)<<code
            <<setprecision(2)<<setw(10)<<cost<<endl;
    }
};

int main(){
    inventory item;
    fstream inoutfile;

    /*<<<<<<<<<<<<<<<< Adding new FILe >>>>>>>>>>>>>>>>>>>>>*/

    inoutfile.open("STOCK.DAT",ios::in | ios::out | ios::ate |ios::binary );

 /*   cout << "\nAdd Data to new file(2 raws): \n";
    for(int i=0;i<2;i++){
        item.getdata();
        inoutfile.write((char*)& item,sizeof(item));
    }

   */
    inoutfile.seekg(0); // sending pointer to 0th byte

    /*<<<<<<<<<<<<<<<< Displaying content of new FILe >>>>>>>>>>>>>>>>>>>>>*/

    cout << "Contents of the file : " << endl;
    while(inoutfile.read((char*)& item,sizeof(item))){
        item.putdata();
    }

    inoutfile.clear(); // turn off EOF flag

    /*<<<<<<<<<<<<<<<< Add one more column >>>>>>>>>>>>>>>>>>>>>*/

    item.getdata();
    inoutfile.write((char*)& item,sizeof(item));

    inoutfile.seekg(0);

    cout << "Contents of appended file : " << endl;

    while(inoutfile.read((char*)& item,sizeof(item))){
        item.putdata();
    }
    inoutfile.clear();

    //find number of the objects in file

    int last = inoutfile.tellg();
    int n = last/sizeof(inventory);

    cout << "\nNumber of objects : "<<n <<endl;
    cout << "\nTotal number of bytes : "<<last<<endl;

    /*<<<<<<<<<<<<<<<< modify one object >>>>>>>>>>>>>>>>>>>>>*/

    cout << "Object number to be modified : ";
    int object;
    cin>>object;

    int location = (object-1)*sizeof(item);

    if(inoutfile.eof())
    inoutfile.clear();

    cout << "Enter new values of object : "<<endl;
    inoutfile.seekp(location);
    item.getdata();
    inoutfile.write((char*)& item,sizeof(item))<<flush;


    /*<<<<<<<<<<<<<<<< New updated FILe >>>>>>>>>>>>>>>>>>>>>*/

    inoutfile.seekg(0);

    cout << "Contents of the file : " << endl;
    while(inoutfile.read((char*)& item,sizeof(item))){
        item.putdata();
    }

    inoutfile.close();

    return 0;
}
