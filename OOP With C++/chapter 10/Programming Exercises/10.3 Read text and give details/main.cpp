#include<iostream>
#include<cstring>
using namespace std;

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

    cout << "Words : " << words <<" ";
    cout << "New line : " << new_line<<" ";
    cout << "Space : "<<space<< " ";
    cout << "Character : " << character<<" ";

    return 0;
}
