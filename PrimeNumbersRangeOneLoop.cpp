// Program: C++ Prime Numbers Range (One Loop)
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	unsigned int primeRange = 0, number = 3, i = 2;
	bool isPrime = true, isSqRooted = true;
	double squareRoot = 0.0;

	cout << "Enter max range for prime numbers: ";
	cin  >> primeRange;

	cout << "\nPrime numbers from 2 to " << primeRange << " are:\n\n 2 ";

	while( number <= primeRange )
	{
		if( isSqRooted )
		{
			squareRoot = sqrt( number );
			i = 2;
		}

		if( number % i != 0 )
		{
			isSqRooted = false;
			i++;
		}
		else
		{
			isPrime = false;
		}

		if( i > squareRoot && isPrime )
		{
			cout << number << " ";
			isSqRooted = true;
			number += 2;
		}
		else if( !isPrime )
		{
			isPrime = true;
			isSqRooted = true;
			number += 2;
		}
	}
	return 0;
}