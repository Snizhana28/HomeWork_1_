/*Task 5. Write a program that displays on the screen
table of multiplication by k, where k is the option number.*/
#include <iostream>
using namespace std;

int main()
{
	int k;
	cout << "Enter a number for the multiplication table : ";
	cin >> k;
	int result = 0;
	if (k >= 1 && k <= 9)
	{
		for (int i = 1; i <= 9; i++)
		{
			cout << k << " * " << i << " = " << k * i << endl;
		}
	}
	else 
	{
		cout << "Error";
	}
	return 0;
}