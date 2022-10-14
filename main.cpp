/*Task 6. The user enters an integer. Necessary
output all integers by which the given number is divisible by no
the remainder*/
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter a number : ";
	cin >> x;
	if (x > 0)
	{
		for (int i = 1; i <= x ; i++)
		{
			if (x % i == 0)
				cout << i << "  ";
		}
	}
	else
	  {
	  	cout << "Error";
	  }
	cout << endl;
	return 0;
}