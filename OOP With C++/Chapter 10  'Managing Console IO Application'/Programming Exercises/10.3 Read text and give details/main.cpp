#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

ostream & margin(ostream & output){
    output.width(20);
    output.setf(ios::right,ios::adjustfield);
    return output;
}

ostream & right_padding(ostream & output){
    output.width(20);
    output.setf(ios::left,ios::adjustfield);
    return output;
}

int main(){
    char sentence[20];
    cin.get(sentence,20);

    int i=0;
    int words=1;
    int new_line=0;
    int character=0;
    int space=0;

    for(int i=0;i<strlen(sentence);i++){
        if(sentence[i]==' ' || sentence[i]=='\n'){
            words++;
        }

        if(sentence[i]==' '){
            space++;

        }

        if(sentence[i]=='\n'){
            new_line++;
        }

        character++;
    }

    character =character-space;

    cout <<right_padding<<"Name of String"<<margin<< "Number of Lines"<<margin<<"Number of Words" <<margin<<"Number of character" << endl;
    cout <<right_padding<<sentence<<margin<< new_line<<margin<<words <<margin<<character<< endl;

    return 0;
}
