#include<iostream>
#include<iterator>
#include<vector>

int main () {
    std::vector<int> value;

    for(int i=0;i<10;i++){
        value.push_back(i*10);
    }

    std::ostream_iterator<int> oo(std::cout,",");
    std::copy(value.begin(),value.end(),oo);
    return 0;
}
