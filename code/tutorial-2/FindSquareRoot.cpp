#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;
    cout << "Enter 5 positive numbers seperated by spaces \n";
    cin >> num;
    
    for (int count = 0; count <= 5; count++)
    {
        if (num >= 0.0)
        {
            cout << "The square root of " << num << " is " << sqrt(num) << "\n";
        }
        else
        {
            cout << "Invalid number entered. (negative)";
        }
    }


    system ("pause");
    return 0;
}
