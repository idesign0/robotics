#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include<fstream>

std::map<std::string,int> histogram;

void record(const std::string&s){
    histogram[s]++;
}

void print(const std::pair<const std::string,int> &r){
    std::cout << r.first <<" " << r.second << std::endl;
}

bool get_1(std::pair<const std::string,int> &r){
    return r.second>1;
}

int main(){
    std::ifstream ff("test.txt");
    std::istream_iterator<std::string> ii(ff);
    std::istream_iterator<std::string> eos;

    for_each(ii,eos,record);
    for_each(histogram.begin(),histogram.end(),print);

}
