#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    float fahrenheit;
    float celcius ;

    cin >> fahrenheit ;

    celcius =(fahrenheit - 32)*5/9 ;

    cout << "Tempreture in Celcius : " << celcius ;

    return 0;
}
