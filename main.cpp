/*Task 2. Count the number of integers in the range
from 100 to 999, in which all digits are different.*/
#include <iostream>
using namespace std;

int main()
{
	int suma = 0;
	for (int i = 100; i <= 999; i++)
	{
		int n1 = i / 100;
		int n2 = (i / 10) % 10;
		int n3 = i % 10;
		if (n1 != n2 && n2 != n3 && n1 != n3)
		{
			suma++;
		}
	}
	cout << "Suma : " << suma;
	return 0;
}