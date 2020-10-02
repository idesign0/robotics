#include<iostream>
#include<iterator>
#include<fstream>
#include<vector>
#include<algorithm>

int main(){
    std::string from,to;
    std::cin >> from >> to;

    std::ifstream is(from.c_str());
    std::istream_iterator<std::string> ii(is);
    std::istream_iterator<std::string> eos;

    std::vector<std::string> v(ii,eos);
    sort(v.begin(),v.end());

    std::ofstream os(to.c_str());
    std::ostream_iterator<std::string> oo(os,"\n");
    unique_copy(v.begin(),v.end(),oo);

    return !is.eof() || !os;
}
