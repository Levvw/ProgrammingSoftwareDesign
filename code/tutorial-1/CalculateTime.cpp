#include <iostream>
using namespace std;

int main()
{
  const int TotalSeconds = 255;
  int RemainingSeconds;
  int Minutes;

  Minutes = TotalSeconds / 60;
  RemainingSeconds = TotalSeconds % 60;

  return 0;
}