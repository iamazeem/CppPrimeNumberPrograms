// Program: C++ Prime Numbers Range Reverse
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	unsigned int primeRange = 0;
	cout << "Enter prime limit: ";
	cin  >> primeRange;

	if( primeRange % 2 == 0 ) --primeRange;   // if even, make it odd...
	
	while( primeRange >= 2 )
	{
		bool isPrime = true;
		const double squareRoot = sqrt( primeRange );

		for( unsigned int i = 2 ; i <= squareRoot; i++ )
		{
			if( primeRange % i == 0 )
			{
				isPrime = false;
				break;
			}
		}

		if( isPrime ) cout << primeRange << " ";

		( primeRange > 3 ) ? primeRange -= 2 : --primeRange;
	}
	return 0;
}
