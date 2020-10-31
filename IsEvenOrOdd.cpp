#include <iostream>
using namespace std;

int main()
{

    int integer;
    cout << "Enter a number!\n";
    cin >> integer;
    
    if (integer != 0)
    {
        if (integer % 2 == 0)
        {
            cout << "This number is even.\n";
            cout << "This line is always printed.\n";
        }
        else (integer % 2 != 0)
        {
            cout << "This number is odd.\n";
            cout << "This line is always printed.\n";
        }
    }
    else
    {
        cout << "This number is zero.\n";
        cout << "This line is always printed.\n";
    }

    system ("pause");
    return 0;
}
