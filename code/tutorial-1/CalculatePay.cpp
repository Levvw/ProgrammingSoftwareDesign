#include <iostream>

using namespace std;

int main()
{
  int hours;
  float rate, pay;

  cout << "enter no. of hours: ";
  cin >> hours;

  cout << "enter hourly rate: ";
  cin >> rate;

  pay = hours * rate;

  cout << "salary is: " << pay << endl;

  return 0;
}