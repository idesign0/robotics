#include <iostream>

using namespace std;

const int m=50;

class item{
    int itemcode[m];
    float itemprice[m];
    int countt;

public:
    void CNT(void){countt=0;}
    void getitem(void);
    void displaysum(void);
    void removeitem(void);
    void displayitem(void);
};

void item::getitem(void){

        cout << "\nEnter item code : ";
        cin>>itemcode[countt];

        cout << "\nEnter item price : ";
        cin>>itemprice[countt];
        countt++;
}

void item::displaysum(void){
        float sum = 0;
        for(int i=0;i<countt;i++){
            sum = sum + itemprice[i];
        }

        cout << "\nTotal value : "<< sum;
}

void item::removeitem(void){

        int a;
        cout << "\nEnter item code : ";
        cin >> a ;

        for(int i=0;i<countt;i++){
                if(itemcode[i]==a){
                    itemprice[i]=0;
                }
        }

}

void item::displayitem(void){
        cout<<"\nCode Price\n";

        for(int i=0;i<countt;i++){
            cout << "\n" << itemcode[i];
            cout << " " << itemprice[i];
        }
        cout<<"\n";
}

int main(){
    item order;
    order.CNT();
    int x;

    do{
        cout <<"\nYou can do following : \n";
        cout <<"\nEnter appropriate Number : \n";
        cout <<"\n1 : Add an item";
        cout <<"\n2 : Display Total value";
        cout <<"\n3 : Delete an item";
        cout <<"\n4 : Display all item";
        cout <<"\n5 : Quite";
        cout <<"\n\nwhat is your option ? ";

        cin>>x;

        switch(x){

        case 1 : order.getitem();break;
        case 2 : order.displaysum();break;
        case 3 : order.removeitem();break;
        case 4 : order.displayitem();break;
        case 5 : break;
        default : cout << "Error in input , try again\n";
        }
    }while(x !=5);

    return 0;

}
