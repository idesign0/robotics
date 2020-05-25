//working with files
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outf("ITEM"); // connected output stream outf to file name item
    string name;
    float cost;

    cout << "Enter ITEM name : "; getline(cin,name);
    cout << "Enter ITEM cost : "; cin>>cost;

    outf<< name << "\n"; // write to file item
    outf<< cost << "\n";

    outf.close(); // disconnecting file from outf

    ifstream inf("ITEM"); // connected input stream to file name item
    string name1;
    float cost1;


    inf >> cost1;
    inf >> name1;
    cout << "\n";

    inf.close();

    cout<< name << "\n";
    cout<< cost << "\n";

    return 0;
}
