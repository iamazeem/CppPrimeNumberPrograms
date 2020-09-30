// Program: C++ Prime Emirp Number Test
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	unsigned int number = 0, reverse = 0;
	bool isPrime = true, isEmirp = true;
	double squareRoot = 0.0;

	cout << "Enter a number: ";
	cin  >> number;

	squareRoot = sqrt( number );
	for( unsigned int i = 2; i <= squareRoot; i++ )
	{
		if( number % i == 0 ) isPrime = false;
	}

	if( isPrime )
	{
		cout << number << " is a PRIME Number." << endl;
		for( unsigned int n = number; n > 0; n /= 10 )
		{
			reverse = reverse * 10 + n % 10;
		}

		squareRoot = sqrt( reverse );
		for( unsigned int i = 2; i <= squareRoot; i++ )
		{
			if( reverse % i == 0 ) isEmirp = false;
		}

		if( isEmirp )
			cout << reverse << " is also an EMIRP." << endl;
		else
			cout << reverse << " is NOT an EMIRP." << endl;
	}
	else
	{
		cout << number << " is NOT a PRIME Number." << endl;
	}
	return 0;
}
