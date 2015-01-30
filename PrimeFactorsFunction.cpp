// Program: C++ Prime Factors
// GitHub : https://github.com/iamAzeem/CppPrimeNumberPrograms

// Author : AZEEM
// GitHub : https://github.com/iamAzeem
// Facebk : https://www.facebook.com/az33msajid

#include<iostream>
using namespace std;

void printPrimeFactors( unsigned int number );

int main(void)
{
	printPrimeFactors( 14 );
	return 0;
}

void printPrimeFactors( unsigned int number )
{
	unsigned int i = 2;
	while( number > 1 )
	{
		if( number % i == 0 )
		{
			cout << i << " ";
			number /= i;
			i = 2;
		}
		else
			i++;
	}
}