/*Task 4. The user enters any integer A.
It is necessary to derive all integers B for which A is divisible
without a remainder on B*B and is not divisible without a remainder on B*B*B.*/
#include <iostream>
using namespace std;

int main()
{
	int A;
	cout << "Enter a number : ";
	cin >> A;
	
	for (int B = 1; B < A; B++)
	{
		if (A % (B * B) == 0 && A % (B * B * B) != 0)
			cout << "Numbers : " << B << "  ";
	}
	return 0;
}