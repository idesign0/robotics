#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>

std::map<std::string,int> histogram;

void record(const std::string&s){
    histogram[s];
}

void print(const std::pair<const std::string,int> &r){
    std::cout << r.first <<" " << r.second << std::endl;
}

int main(){
    std::istream_iterator<std::string> ii(std::cin);
    std::istream_iterator<std::string> eos;

    for_each(ii,eos,record);
    for_each(histogram.begin(),histogram.end(),print);
}
