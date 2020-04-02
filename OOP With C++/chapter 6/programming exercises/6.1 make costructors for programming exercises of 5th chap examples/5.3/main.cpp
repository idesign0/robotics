#include<iostream>
using namespace std;

class items{
    int *itemcode;
    float *itemprice;
    int countt;
    int sizee;
public :
    items(){
        sizee++;

        itemcode = new int[sizee];
        itemprice = new float[sizee];
    }


    void CNT(void){countt=0;sizee=0;};
    void getitem();
    void displaysum();
    void removeitem();
    void displayitems();
};
    void items::getitem(){
        cout << "Enter item code : ";
        cin >> itemcode[countt];

        cout << "Enter item Price : ";
        cin >> itemprice[countt];

        countt++;
    }

    void items::displaysum(){
        float sum=0;

        for(int i=0;i<countt;i++){
            sum += itemprice[i];
        }

        cout << "\nTotal Value : " << sum << endl;
    }
    void items::removeitem(){
        int code;
        cout << "Remove item code : " ;
        cin >> code ;

        for(int i=0;i<countt;i++){
            if(code==itemcode[i]){
                itemprice[i]=0;
            }
        }
    }
    void items::displayitems(){
        cout << "\n Code Price \n";
        for(int i=0;i<countt;i++){
            cout << "\n" << itemcode[i] << " " << itemprice[i];
        }
        cout << "\n";
    }
int main(){
    items order;
    order.CNT();

    int x;
    do{
        cout << "\nYou can do the following ; Enter appropriate number : \n";
        cout << "\n1 : Add an item ";
        cout << "\n2 : Display total value ";
        cout << "\n3 : Delete an item ";
        cout << "\n4 : Display all item ";
        cout << "\n5 : Quite";

        cout << "\nWhat is your opinion ? ";

        cin >> x;

        switch(x){

            case 1 : order.getitem();break;
            case 2 : order.displaysum();break;
            case 3 : order.removeitem();break;
            case 4 : order.displayitems();break;
            case 5 : break;
        }

    }while(x!=5);

    return 0;
}
