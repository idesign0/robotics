#include<iostream>
#include<iterator>
#include<algorithm>
#include<string>
#include<vector>

typedef std::ostream_iterator<std::string> os_itrp;

int main(){
    std::vector<std::string> str;
    str.push_back("Hello");
    str.push_back("world !");
    os_itrp oo(std::cout,", ");

    copy(str.begin(),str.end(),oo);
    return 0;
}
