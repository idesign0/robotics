#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char stringg[30];

    cout<<"Enter string : "; cin.getline(stringg,30);

    int len=strlen(stringg);

    fstream file; // input and output string;
    cout << "Opening the 'TEXT' file and storing the string in it.\n\n";

    file.open("TEXT",ios::in | ios::out | ios::app);

    for(int i=0;i<len;i++){
        file.put(stringg[i]);// put character to file
        }


    file.seekg(0); // goto start

        char ch;
        cout<<"Reading the file contents : ";
        while(file.eof()==0){
            file.get(ch);
            cout<<ch;
        }
    file.close();
    return 0;
}
