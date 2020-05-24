#include<iostream>
using namespace std;

class menu{
protected:
    int code;
    int choice;
    enum product_type{electronic=1,kitchen,foods,milk,cloths};
public:
    void get_choice(){
    cout << "Code of the product : ";cin>>code;
    cout << "Press appropriate Number associated with the product : "
         << "\n1. Electronics appliances "
         << "\n2. kitchen appliances "
         << "\n3. Food "
         << "\n4. Milk products "
         << "\n5. Clothes "
         << "\nEnter your choice : ";cin>>choice;
    }
};

class electronic_product:public virtual menu{
    string name;
    int tag;
    float price;
    float power;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << "Name of electronic Product : ";getline(cin,name);
    cout << "Price : ";cin>>price;
    cout << "Stock : ";cin>>stock;
    cout << "Power Requirement : ";cin>>power;
    }
    void show_details(){
    cin.ignore();
    cout << "Name of electronic Product : "<< name << endl;
    cout << "Price : "<< price <<" rupees" <<endl;
    cout << "Stock : "<< stock << endl;
    cout << "Power Requirement : "<< power << ""<<endl;
    cout << "Power Requirement : "<< power << " KWH"<<endl;

    }
};

class kitchen_product:public virtual menu{
    string name;
    int tag;
    float price;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << "Name of kitchen Product : ";getline(cin,name);
    cout << "Price : ";cin>>price;
    cout << "Stock : ";cin>>stock;
    }
    void show_details(){
    cin.ignore();
    cout << "Name of kitchen Product : "<< name << endl;
    cout << "Price : "<< price << endl;
    cout << "Stock : "<< stock<<endl;
    }
};

class food:public virtual menu{
    string name;
    int tag;
    float price;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << "Name of food : ";getline(cin,name);
    cout << "Price : ";cin>>price;
    cout << "Stock : ";cin>>stock;
    }
    void show_details(){
    cin.ignore();
    cout << "Name of food : "<< name << endl;
    cout << "Price : "<< price << endl;
    cout << "Stock : "<< stock;
    }
};

class milk_products:public virtual menu{
    string name;
    int tag;
    float price;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << "Name of Milk products : ";getline(cin,name);
    cout << "Price : ";cin>>price;
    cout << "Stock : ";cin>>stock;
    }
    void show_details(){
    cin.ignore();
    cout << "Name of Milk products : "<< name << endl;
    cout << "Price : "<< price << endl;
    cout << "Stock : "<< stock<<endl;
    }
};

class clothes:public virtual menu{
    string name;
    int tag;
    float price;
    int stock;
public:
    void get_details(){
    cin.ignore();
    cout << "Name of Clothes : ";getline(cin,name);
    cout << "Price : ";cin>>price;
    cout << "Stock : ";cin>>stock;
    }
    void show_details(){
    cin.ignore();
    cout << "Name of Clothes : "<< name << endl;
    cout << "Price : "<< price << endl;
    cout << "Stock : "<< stock << endl;
    }
};

class products:public electronic_product,public kitchen_product,public clothes,public milk_products,public food{
public:
    void get_details(){
        menu::get_choice();
        switch(choice){
            case electronic : electronic_product::get_details(); break;
            case kitchen : kitchen_product::get_details(); break;
            case cloths : clothes::get_details(); break;
            case milk : milk_products::get_details();break;
            case foods : food::get_details();break;
            default : cout <<"Invalid choice !";
        }

    }
    void show_details(){
        switch(choice){
            case electronic : electronic_product::show_details(); break;
            case kitchen : kitchen_product::show_details(); break;
            case cloths : clothes::show_details(); break;
            case milk : milk_products::show_details();break;
            case foods : food::show_details();break;
            default : cout <<"Invalid choice !";
        }
    }

    int searchh(int a){
        if(a==code){
            return 1;
        }else{
            return 0;
        }
    }

};

int main(){
    products prdct[30];
    bool value = true;
    int member=0;
    while(value){

        int option,i=0;
        string name;int code_number;
        cout << "Menu : \n\n"
             << "\n1.Add details of employees"
             << "\n2.Show details of employees"
             << "\n3.Quite"
             << "\nYour option : ";cin>>option;

         switch(option){
            case 1 : prdct[member].get_details();
                     member++;break;
            case 2 :
                     cout << "Enter code number of the Employee : "; cin>>code_number;

                     for(i=0;i<member;i++){
                        if(prdct[i].searchh(code_number)==1){
                            prdct[i].show_details();
                            break;
                        }
                     }
                     if(i==member){"employees are not listed\n";}break;

            case 3 : value = false;
         }

    }
    return 0;
}

