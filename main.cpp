/*Task 4. Find the product of all integers from a to 20 (the value of a is entered from the keyboard: 1 <= a <= 20)*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter 1 number of the range (1 <= a <= 20) : ";
	cin >> a;
	long long result = 1;
	for (int i = a; i <= 20; i++)
		result *= i;
	cout << "Result : " << result;
	return 0;
}