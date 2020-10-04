#include<iostream>
#include <limits>

int main(){
    std::cout << "largest and smallest value of types :\n\n";
    std::cout << "char min: " << std::numeric_limits<char>::min() << " char max: " << std::numeric_limits<char>::max() << std::endl;
    std::cout << "short min: " << std::numeric_limits<short>::min() << " short max: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "int min: " << std::numeric_limits<int>::min() << " int max: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "long min: " << std::numeric_limits<long>::min() << " long max: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "float min: " << std::numeric_limits<float>::min() << " float max: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "double min: " << std::numeric_limits<double>::min() << " double max: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "long double min: " << std::numeric_limits<long double>::min() << " long double max: " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "unsigned min: " << std::numeric_limits<unsigned>::min() << " unsigned max: " << std::numeric_limits<unsigned>::max() << std::endl;
}
