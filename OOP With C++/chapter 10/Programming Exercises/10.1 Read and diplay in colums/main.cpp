#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class softwares{
    string name;
    int code;
    float cost;
public:
    softwares();
    void display();
};

ostream & form(ostream & output){
    output.precision(2);
    //cout.fill('_');
    output.setf(ios::showpoint);
    output<<setiosflags(ios::fixed)<<setw(20)<<setiosflags(ios::fixed)<<setiosflags(ios::left);
    return output;
}

ostream & space(ostream & output){
    output<<setw(20)<<setiosflags(ios::right);
    return output;
}

ostream & space_left(ostream & output){
    output<<setw(20)<<setiosflags(ios::left);
    return output;
}

softwares::softwares(){
    cin.ignore();
    cout << "Enter Software name : ";getline(cin,name);
    cout << "Enter Software code : ";cin>>code;
    cout << "Enter Software cost : ";cin>>cost;
}

void softwares::display(){
    cout <<space_left<<name << space << code << space << cost <<endl;
}
int main(){
    const int sizee=10;
    softwares *o_softwares[sizee];

    int countt=0, i;
    int option;
    cout << "Display Information of software :\n";
    while(1){
        cout << "\nMenu";
        cout << "\n1.Add Details";
        cout << "\n2.Show Details";
        cout << "\n3.Quite";
        cout << "\nOption : ";
        cin>>option;

        switch(option){
            case 1 : o_softwares[countt]=new softwares;
                     o_softwares[countt];
                     countt++;break;
            case 2 :cout<<endl<<space_left<<"NAME"<<space<<"CODE"<<space<<"COST"<<"\n";
                    for(i=0;i<countt;i++){
                        cout.setf(ios::left,ios::adjustfield);
                        o_softwares[i]->display();
                    }break;
            case 3 : exit(0);
        }
    }
    return 0;
}
