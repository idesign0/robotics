#include<iostream>
using namespace std;

int main()
{
    int sizee=20;
    char city[20];

    cout << "Enter city name : "; cin>>city;

    cout << "City name : " << city << "\n\n";
    cout << "Enter city name again : \n";
    cin.ignore();
    cin.getline(city,sizee);

    cout << "City name now : " << city <<"\n\n";

    cout << "Enter another city name again : \n";
    cin.getline(city,sizee);

    cout << "New city name : " << city <<"\n\n";

    return 0;
}
