#include <iostream>
using namespace std;

int main()
{
    double pay, rate, hours;
    
    cout << "How much is your hourly rate?\n";
    cin >> rate;

    cout << "How many hours do you work per day?\n";
    cin >> hours;

    pay = rate * hours;
    cout << "Your pay is " << pay << " per day.\n";

    system("pause");
    return 0;
}
