#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

const int name_Size = 20 ;
const int total_holders = 20;

class bankaccount {

    static int countt;
    string account_Holder[total_holders][name_Size];
    int account_Number[total_holders];
    float acc_balance[total_holders];

    enum type_of_Acc { savings , current , Fixed_deposit};

    float init_balance = 1000.00 ;

public :

    void minimum_balance();
    void cash_Deposit();
    void cash_Withdraw();
    void display_Details();

    void taking_money_from_friends_account();

};

    int bankaccount::countt;

// function definition
    void bankaccount::minimum_balance(){

            cout << "\n\tEnter Account holder name : ";
            cin >> account_Holder[countt][name_Size];

            acc_balance[countt] = init_balance;

            cout << endl <<account_Holder[countt][name_Size]<<"'s initial balance is " << acc_balance[countt] << " /- Rupees."<< endl;

          /*  cout << "\nType of account :\n Press 1 for savings \n Press 2 for Current \n Press 3 for Fixed deposit ";
            cout << "\n\n What is your choice : ";
            cin >> code ;
            */

            srand(time(0));
            account_Number[countt] = rand()%5555 + 1;

            cout << endl <<account_Holder[countt][name_Size]<<"'s bank account number is " << account_Number[countt] << endl<< endl;

            countt++;

    }


    void bankaccount::cash_Deposit(){

            int ac_number;
                cout << "Enter your Bank account Number : ";
                cin >> ac_number;

            for(int i=0;i<countt;i++){
                if(ac_number==account_Number[i]){
                    cout << "\n\nDetails of Your account : \n";
                    cout << endl << setw(20)<<"Account Holder" << setw(20)<<"Account Number" <<setw(10) <<"Balance" << endl ;
                    cout << "***************************************************************"<<endl;

                    cout << setw(20)<<account_Holder[i][total_holders] << setw(20) << account_Number[i] <<setw(10)<< acc_balance[i] << endl;

                    cout << "***************************************************************"<<endl;

                    int deposit ;

                        cout << "How much money " << account_Holder[countt][name_Size] << " want to deposit : " ;
                        cin >> deposit;

                    acc_balance[i] +=deposit ;

                        cout << endl << setw(20)<<"Account Holder" << setw(20)<<"Account Number" <<setw(10) <<"Balance" << endl ;
                        cout << "***************************************************************"<<endl;

                        cout << setw(20)<<account_Holder[i][total_holders] << setw(20) << account_Number[i] <<setw(10)<< acc_balance[i] << endl;

                        cout << "***************************************************************"<<endl;


                }
    }

    }

    void bankaccount::cash_Withdraw(){
        int ac_number;
            cout << "Enter your Bank account Number : ";
            cin >> ac_number;

                for(int i=0;i<countt;i++){
                    if(ac_number==account_Number[i]){
                        cout << "\n\nDetails of Your account : \n";
                        cout << endl << setw(20)<<"Account Holder" << setw(20)<<"Account Number" <<setw(10) <<"Balance" << endl ;
                        cout << "***************************************************************"<<endl;

                        cout << setw(20)<<account_Holder[i][total_holders] << setw(20) << account_Number[i] <<setw(10)<< acc_balance[i] << endl;

                        cout << "***************************************************************"<<endl;

                    int deposit ;

                        cout << "How much money " << account_Holder[countt][name_Size] << " want to Withdraw : " ;
                        cin >> deposit;

                    acc_balance[i] -= deposit ;

                        cout << endl << setw(20)<<"Account Holder" << setw(20)<<"Account Number" <<setw(10) <<"Balance" << endl ;
                        cout << "***************************************************************"<<endl;

                        cout << setw(20)<<account_Holder[i][total_holders] << setw(20) << account_Number[i] <<setw(10)<< acc_balance[i] << endl;

                        cout << "***************************************************************"<<endl;
        }
    }
}

    void bankaccount::display_Details(){

        cout << endl << setw(20)<<"Account Holder" << setw(20)<<"Account Number" <<setw(10) <<"Balance" << endl ;
        cout << "***************************************************************"<<endl;
        for(int i =0 ; i<countt ; i++){

            cout << setw(20)<<account_Holder[i][total_holders] << setw(20) << account_Number[i] <<setw(10)<< acc_balance[i] << endl;
        }
        cout << "***************************************************************"<<endl;
    }

    void bankaccount::taking_money_from_friends_account(){

        int ac_number_friend;
        int ac_your;

        cout << "Enter your Friends Account Number : ";
        cin >> ac_number_friend;
            for(int j=0;j<countt;j++){
                if(ac_number_friend == account_Number[j]){
                    int pin = 6699;
                    int input_pin;

                        cout << "***************************************************************"<<endl;

                        cout << setw(20)<<account_Holder[j][total_holders] << setw(20) << account_Number[j] <<setw(10)<< acc_balance[j] << endl;

                        cout << "***************************************************************"<<endl;

                  cout << "Enter your friends mobile pin to confirm : ";
                  cin >> input_pin;
                    if(input_pin==pin){


                            cout <<" Enter your Account number : ";
                            cin >> ac_your;

                             for(int i=0;i<countt;i++){
                                int input ;
                                if(ac_your == account_Number[i]){

                                cout << "How much you want to take : ";
                                cin  >> input;

                            acc_balance[i] += input ;

                            acc_balance[j] -= input ;
                                cout << "Done!" ;
                                }

                        }
                    }
                }
            }
    }

int main(){
    bankaccount ac_holder;

    int action;

    cout << "\n You can do following; Enter Appropriate Number : "<< endl;

        cout << "***************************************************************";
        cout << "\n\t1 : Open new bank account";
        cout << "\n\t2 : Deposit Cash";
        cout << "\n\t3 : Withdraw Cash";
        cout << "\n\t4 : Display details of account holders";
        cout << "\n\t5 : Taking money from Friend's account\n";
        cout << "\n\t6 : Quite\n";
        cout << "***************************************************************"<<endl;

    do{

        cout << "\n\nWhat is your option : ";

        cin >> action;

        switch(action){

            case 1 : ac_holder.minimum_balance(); break ;
            case 2 : ac_holder.cash_Deposit(); break ;
            case 3 : ac_holder.cash_Withdraw(); break ;
            case 4 : ac_holder.display_Details(); break ;
            case 5 : ac_holder.taking_money_from_friends_account();break ;
            case 6 : break ;

            default : "Error in input , Try again !";
        }

    }while(action!=6);


}



