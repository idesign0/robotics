#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void readcomments(istream *input){
    while(input->good()){
        char ch;
        ch = input->get();
        if(ch=='/')
        {
            input->get();
            return;
        }
    }
}

void readline(istream *input){
    char ch;
    while(input->good()){
        input->get(ch);
        if(ch=='\n') {
            return;
        }
    }
}

void readstrings(istream *input,ostream *output,char endchar){
    char ch;
    while(input->good()){
        input->get(ch);
        switch(ch){
        case '\\':
            output->put(ch);
            if(input->peek()==endchar){
                output->put(input->get());
            }
            break;
        default:
            output->put(ch);
            if(ch==endchar){
                return;
            }
            break;
        }
    }
}

void stripcomments(istream *input,ostream *output){
    char ch;
    while(input->good()){
        input->get(ch);
        switch(ch)
        {
        case '/' :
            {
                char p = input->get();
                if(p=='*')
                {
                    readcomments(input);
                }else if(p=='/')
                {
                    readline(input);
                }
                else
                {
                    output->put(ch);
                }
                break;
            }
        case '"':
            output->put(ch);
            readstrings(input,output,ch);
            break;
        default:
            output->put(ch);
            break;
        }
    }
}

int main(){
    istream* input;

    input= new ifstream("maintest.cpp",ifstream::in);
    stripcomments(input,&cout);

    if(input!=&cin) delete input;
    return 0;
}
