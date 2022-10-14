/*Task 2. Write a program that queries two integers
numbers x and y, after which it calculates and outputs the value of x y
powers of y.*/
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	  cout << "Enter 1 number of the range: ";
	  cin >> x;
	  cout << "Enter 2 number of the range: ";
	  cin >> y;
	int x1 = x;
	if (y > 0)
	{
		for (int i = 1; i < y; i++)
			x *= x1;
		cout << "Result : " << x;
	}
	else if (y == 0) 
		cout << 1;
	else
		cout << "Error!";
	return 0;
}