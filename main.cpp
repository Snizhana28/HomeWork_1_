/*Task 1. Write a program that calculates the sum of integers
numbers from a to 500 (the value of a is entered from the keyboard).*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter a number : ";
	cin >> a;
	int suma = 0;
	int i = a;
	while (i <= 500)
	{
		suma += i;
		i++;
	}
	cout << "Suma : " << suma;
	return 0;
}