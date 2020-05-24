#include <iostream>


using namespace std;


int main()
{

    short i=10,j=5;

    int modresult=0;
    int divresult=0;

    modresult = i%j + 1;

    cout << modresult << " ";

    divresult = 1/ modresult;

    cout << divresult;

    return 0;
}
