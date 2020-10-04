#include<iostream>

void print_char_val(char a,char b){
    for (char ch=a;ch<=b;ch++){
        std::cout << ch << " = " <<int(ch) <<" "<<std::hex<<"0x"<<int(ch)<<std::dec<<std::endl;
    }
}

int main(){
    std :: cout << "Printing Characters \n\n";

    int initial_num = 0;
    for(int i=initial_num;i<initial_num+256;i++){
        std::cout << i << " is ascii value for " << char(i) << std::endl;
    }

    std::cout << "\n\nHexa decimal notation:: \n\n";
    print_char_val('a','z');
    print_char_val('0','9');
}
