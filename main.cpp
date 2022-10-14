/*Task 3. The user enters any integer.
It is necessary to remove all digits 3 and 6 from this integer
and output back to the screen.*/
#include <iostream>
using namespace std;

int main()
{
	int namber1, namber2 = 0;
	cout << "Enter a number : " ;
	cin >> namber1;
	
	while (namber1 > 0)
	{
	  if (namber1 % 10 != 3 &&
		  namber1 % 10 != 6)
	  {
		  namber2 *= 10;
		  namber2 += namber1 % 10;
	  }
	  namber1 /= 10;
	}
	
	cout << "Result: ";
	
	while (namber2 > 0)
	{
	  cout << namber2 % 10;
	  namber2 /= 10;
	}
	cout << endl;
	return 0;
}