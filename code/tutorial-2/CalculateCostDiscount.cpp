#include <iostream>
using namespace std;

int main()
{
    int Quantity;
    cout << "How much did you buy?\n";
    cin >> Quantity;

    int Cost = Quantity * 100;
    
    if (Cost > 1000)
    {
        cout << "Your total cost after the discount is: " << Cost - (Cost * 0.1);
    }
    else
    {
        cout << "Your total cost is: " << Cost << "\n";
    }

    system ("pause");
    return 0;
}
