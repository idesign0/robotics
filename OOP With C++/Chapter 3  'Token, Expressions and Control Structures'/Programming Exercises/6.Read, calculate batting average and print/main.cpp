//TABLE READ
/*
Read calculate and print the batting average and table
*/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    int runs,innings,timesnotout;
    string name;

    ofstream myfile("test.txt");

    if(myfile.is_open()){

    cout << setw(10)<< "Names"<<setw(10)<<"Runs"<< setw(10)<<"Innings"<<setw(15)<<"Times not out" << setw(10)<<"Average"<< endl;
    while(cin >> name >> runs >> innings >> timesnotout){
        myfile <<' '<<name<<' '<<runs<<' '<<innings<<' '<<timesnotout << endl;
    }


    ifstream myfile("test.txt");
    cout << setw(10)<< "Names"<<setw(10)<<"Runs"<< setw(10)<<"Innings"<<setw(15)<<"Times not out" << setw(10)<<"Average"<< endl;

    while(myfile >> name >> runs >> innings >> timesnotout){
        float avg = runs /innings;

        cout<< setw(10)<< name <<setw(10)<< runs <<setw(10)<<innings<<setw(15)<<timesnotout<<setw(10)<<avg << endl;
    }


    }else{
    cout << "You messed up !";
    }
     myfile.close();

}
