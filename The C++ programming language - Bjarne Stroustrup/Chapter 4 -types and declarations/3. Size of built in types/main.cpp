#include<iostream>

int main(){
    std::cout << "Size of Built-in Data types : \n\n";
    std::cout << "Size of char data type: " << sizeof(char) <<std::endl;
    std::cout << "Size of signed char data type: " << sizeof(signed char) <<std::endl;
    std::cout << "Size of unsigned data type: " << sizeof(unsigned char) <<std::endl;
    std::cout << "Size of int data type: " << sizeof(int) <<std::endl;
    std::cout << "Size of unsigned int data type: " << sizeof(unsigned int) <<std::endl;
    std::cout << "Size of signed int data type: " << sizeof(signed int) <<std::endl;
    std::cout << "Size of short int data type: " << sizeof(short int) <<std::endl;
    std::cout << "Size of unsigned short int data type: " << sizeof(unsigned short int) <<std::endl;
    std::cout << "Size of signed short int data type: " << sizeof(signed short int) <<std::endl;
    std::cout << "Size of long int data type: " << sizeof(long int) <<std::endl;
    std::cout << "Size of unsigned long int data type: " << sizeof(unsigned long int) <<std::endl;
    std::cout << "Size of signed long int data type: " << sizeof(signed long int) <<std::endl;
    std::cout << "Size of float data type: " << sizeof(float) <<std::endl;
    std::cout << "Size of double data type: " << sizeof(double) <<std::endl;
    std::cout << "Size of long double data type: " << sizeof(long double) <<std::endl;

    enum enum1{a};
    enum enum2{b,c,d,e,f,g};

    std::cout << "Enum1 : " << sizeof(enum1) <<std::endl;
    std::cout << "Enum2 : " << sizeof(enum2) <<std::endl;
}
