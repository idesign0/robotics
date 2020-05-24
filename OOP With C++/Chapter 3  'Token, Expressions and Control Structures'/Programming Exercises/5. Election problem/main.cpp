//election program
/*
make a program which can read ballot paper and count the votes for each candidates using an array variable count;
*/


#include <iostream>

using namespace std;

int main(){
    int numberOfvotes,one=0,two=0,three=0,four=0,five=0,spoil=0,vote;
        cin>>numberOfvotes;
        int candidates[6]={one,two,three,four,five};
    for(int i=0;i<numberOfvotes;i++){

        cout << "Candidates are as Follows : \n 1 \n 2 \n 3 \n 4 \n 5 \n Give your Vote For :";
        cin >> vote;

        switch(vote){

        case 1 : one++;
                *(candidates) =one;
                break;

        case 2 : two++;
                *(candidates+1) = two;
                break;

        case 3 : three++;
                *(candidates+2) =three;
                break;

        case 4 : four++;
                *(candidates+3) =four;
                break;

        case 5 : five++;
                *(candidates+4) =five ;
                break;

        default : spoil++;
                    *(candidates+5) =spoil ;

        }
    }

        cout <<endl<<endl<<"Candidate 1 got "<<one<<" votes" <<endl;
        cout <<"Candidate 2 got "<<two<<" votes"<<endl;
        cout <<"Candidate 3 got "<<three<<" votes"<<endl;
        cout <<"Candidate 4 got "<<four<<" votes"<<endl;
        cout <<"Candidate 5 got "<<five<<" votes"<<endl;
        cout <<"Candidate Spoil got "<<spoil<<" votes"<<endl;


    for(int i =0 ;i<=5;i++){
        cout << *(candidates + i) << endl;
    }

}
