// Program: C++ Prime Number Test with Loop
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	unsigned int number = 0;
	bool isPrime = true;

	cout << "Enter a number: ";
	cin  >> number;

	const double squareRoot = sqrt( number );
	for( unsigned int i = 2; i <= squareRoot; i++ )
	{
		if( number % i == 0 )
		{
			isPrime = false;
			break;
		}
	}

	if( isPrime )
		cout << number << " is prime." << endl;
	else
		cout << number << " is NOT prime." << endl;

	//cout << ( isPrime ? " is prime." : " is NOT prime." ) << endl;
	
	return 0;
}