/*Task 5. The user enters an integer A.The program
must determine that the cube of the sum of the digits of this number is equal
A * A.*/
#include <iostream>
using namespace std;

int main()
{
	int A, suma = 0;
	cout << "Enter a number : ";
	  cin >> A;
	  for (int i = A; i > 0; i /= 10)
	{
		suma += i % 10;
	}
	  if (suma * suma * suma == A * A) 
		cout << "The cube of the sum of the digits of this number = " << A*A << endl;
	else 
		cout << "The cube of the sum of the digits of this number  != " << A*A << endl;
	return 0;
}