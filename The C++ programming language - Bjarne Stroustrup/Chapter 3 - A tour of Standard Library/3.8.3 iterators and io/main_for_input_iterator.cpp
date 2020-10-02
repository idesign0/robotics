#include<iostream>
#include<iterator>

int main () {

    double value1,value2;
    std::cout << "Enter two values : " ;

    std::istream_iterator<double>iit(std::cin);
    std::istream_iterator<double>eos;

    if(iit!=eos) value1 = *iit; iit++;

    if(iit!=eos) value2 = *iit;

    std::cout << "Multiplication : " << value1*value2 << std::endl;
    return 0;
}
