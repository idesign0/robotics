#include <iostream>

using namespace std;

int main()
{
    int howmany;
    float sum = 0,average;

    float number[howmany];


    cout << "How many values you want to Add :  "  << endl;

    cin >> howmany ;

    for(int i=0; i < howmany ; i++){

        cin >> number[i];

        sum += number[i];
    }


    average = (float)sum / (float)howmany ;

    cout << "Print the Values : SUM : " << sum << " Average : " << average << endl;

    return 0;
}
