/*Task 7. The user enters two integers. It is necessary to output all integers for which both numbers are entered
are divided without a remainder.*/
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter 1 number : ";
	cin >> x;
	cout << "Enter 2 number : ";
	cin >> y;
	if (x > 0 && y > 0)
	{
		for (int i = 1; i <= x; i++)
		{
			if (x % i == 0 && y % i == 0)
				cout << i << "  ";
		}
	}
	else
	   {
	   	cout << "Error";
	   }
	
	return 0;
}