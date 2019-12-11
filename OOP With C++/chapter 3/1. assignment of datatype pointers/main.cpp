#include <iostream>


using namespace std;


int main()
{
    char y = 'e'; // character data type

    void * py = &y; // any pointer of data type can be assigned to void pointer

    char *w;

    w=(char *)py ; // but void pointer cant be assigned to any data type without cast

    cout << *w ;


    return 0;
}
