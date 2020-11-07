#include <iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;
	int avg;

	cout << "Enter 10 numbers, separated by spaces\n";
	
	for (int i = 0; i < 10; i++)
	{
		cout << "\nEnter a number!\n";
		cin >> num;
		sum += num;
	}

	avg = sum / 10;
	cout << "\n The average is: " << avg << "\n";


	system("pause");
	return 0;
}
