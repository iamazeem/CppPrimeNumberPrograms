// Program: C++ Prime Emirp Number Test with Functions
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime( unsigned int number );
bool isEmirp( unsigned int number );
int  reverse( unsigned int number );

int main(void)
{
	unsigned int number = 0;
	cout << "Enter a number: ";
	cin  >> number;

	if( isPrime( number ) )
	{
		cout << number << " is a PRIME." << endl;
		
		if( isEmirp(number) )
			cout << number << " is also an EMIRP." << endl;
		else
			cout << number << " is NOT an EMIRP." << endl;    
	}
	else
	{
		cout << number << " is NOT a PRIME." << endl;
	}
	return 0;
}

bool isPrime( unsigned int number )
{
	const double squareRoot = sqrt( number );
	for( unsigned int i = 2; i <= squareRoot; i++ )
	{
		if( number % i == 0 ) return false;
	}
	return true;
}

bool isEmirp( unsigned int number )
{
	unsigned int reversedNumber = reverse( number );
	return isPrime( reversedNumber );
}

int  reverse( unsigned int number )
{
	int reversedNumber = 0;
	while( number > 0 )
	{
		reversedNumber = reversedNumber * 10 + number % 10;
		number /= 10;
	}
	return reversedNumber;
}

/*----------------------------------------------------------------------------*/
