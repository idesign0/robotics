#include <iostream>
#include <iomanip>
using namespace std;

void toh(int,char,char,char);

int main(){

    //prompt
    cout << "Enter Number of Disks : " ;

    int disk;

    cin >> disk;

    if(disk<1){
        cout << "There are no disks to shift";}
    else{
    }
    cout << "Tower1  Tower2 Tower3" <<endl;
    toh(disk,'1','2','3');

}

void toh(int d,char tower1,char tower2,char tower3){

    if(d==1){

        cout <<"Shift top disk from tower "<<tower1<<" to "<<tower2<<endl;
        return;
    }

    toh(d-1,tower1,tower3,tower2);


    cout <<"Shift top disk from tower "<<tower1<<" to "<<tower2 <<endl;


    toh(d-1,tower3,tower2,tower1);
}
