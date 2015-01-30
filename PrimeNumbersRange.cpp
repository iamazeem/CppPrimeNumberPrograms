// Program: C++ Prime Numbers Range
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
	cout << "Enter a range for prime numbers: ";
	cin  >> primeRange;

	cout << endl
	     << "Prime numbers from 2 to " << primeRange << " are:"
	     << endl
	     << " 2 ";      // There's only one even prime number i.e. 2;
			            // we can skip all the remaining even numbers.

	for( unsigned int number = 3; number <= primeRange; number += 2 )
	{
		bool isPrime = true;
		const double squareRoot = sqrt( number );
		for( unsigned int i = 2; i <= squareRoot && isPrime; i++ )
		{
			if( number % i == 0 )
                isPrime = false;
		}
		
		if( isPrime )
            cout << number << " ";
	}
	return 0;
}
