#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a positive integer!\n";
    cin >> input;
    
    if (input >= 0)
    {
        cout << "You entered: " << input << "\n";
    }
    

    cout << "This statement is always executed!";

    system ("pause");
    return 0
