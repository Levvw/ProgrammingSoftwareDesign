#include <iostream>
using namespace std;

int main()
{
  int num1, num2, sum;

  cout << "Enter the first number!\n";
  cin >> num1;

  cout << "Enter the second number!\n";
  cin >> num2;

  // '\n' is the same as 'endl' which inserts a new line.

  sum = num1 + num2;
  cout << sum << endl;

  system("pause");
  return 0;
}