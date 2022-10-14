/*Find the arithmetic mean of all integers
from 1 to 1000.*/
#include <iostream>
using namespace std;

int main()
{
	double result = 0;
	double suma = 0;
	for (int i = 1; i <= 1000; i++)
	{
		suma += i;
		result = (suma) / 1000;
	}
	cout << "Result : " << result;
	return 0;
}