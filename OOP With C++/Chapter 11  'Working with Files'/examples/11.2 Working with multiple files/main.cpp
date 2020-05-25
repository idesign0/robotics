#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream fout;
    fout.open("country");

    fout<< "United states\n";
    fout<< "United kingdom\n";
    fout<< "India\n";

    fout.close();

    fout.open("capital");

    fout<< "Washington\n";
    fout<< "London\n";
    fout<< "Delhi\n";

    fout.close();

    ifstream fin;
    fin.open("country");
    char line[30];

    cout << "Contents of country file \n";
    while(fin){
        fin.getline(line,30);
        cout<<line<<"\n";
    }
    fin.close();


    fin.open("capital");
    cout << "Contents of capital file \n";
    while(fin){
        fin.getline(line,30);
        cout<<line<<"\n";
    }
    fin.close();

    return 0;
}
