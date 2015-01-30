// Program: C++ Prime Number Test with Function
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime( unsigned int number );

int main(void)
{
	unsigned int number = 0;
	cout << "Enter a number: ";
	cin  >> number;

	if( isPrime( number ) )
		cout << number << " is prime." << endl;
	else
		cout << number << " is NOT prime." << endl;

	//cout << ( isPrime(number) ? " is prime." : " is NOT prime." ) << endl;

	return 0;
}

bool isPrime( unsigned int number )
{
	const double squareRoot = sqrt( number );
	for( int i = 2; i <= squareRoot; i++ )
	{
		if( number % i == 0 ) return false;
	}
	return true;
}
