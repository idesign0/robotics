#include <iostream>


using namespace std;

int main()
{

    float number1,number2;

    cin >> number1 >> number2 ;

    cout << "Bigger Number : ";

    (number1>number2) ?  cout << number1 : cout << number2;

    return 0;
}
