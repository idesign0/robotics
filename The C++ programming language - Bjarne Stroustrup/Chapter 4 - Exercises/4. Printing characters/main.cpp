#include<iostream>

int main(){
    std :: cout << "Printing Characters \n\n";

    int initial_num = 0;
    for(int i=initial_num;i<initial_num+256;i++){
        std::cout << i << " is ascii value for " << char(i) << std::endl;
    }
}
