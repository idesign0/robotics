#include <iostream>
#include <cmath>


using namespace std;

class tempreture{


    float fahrenheit;
    float celcius;

public :

    float conversiont(float);
    float conversionk(float);

};

float tempreture::conversiont(float t){

    fahrenheit = t;

    celcius = (fahrenheit-32)*5/9;

    return celcius;

}

float tempreture::conversionk(float t){

    fahrenheit = t;

    celcius = (fahrenheit-32)*5/9 + 273.15;

    return celcius;

}


int main()
{
    float temp;
    tempreture t;

    cin>>temp;

    cout << "Conversion from Fahrenheit to Celcius : " << t.conversiont(temp) << endl;

    cout << "Conversion from Fahrenheit to Celcius : " << t.conversionk(temp) << endl;


    return 0;
}
