#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{
    std::size_t primeRange = 0;
    std::cout << "Enter max range for prime numbers: ";
    std::cin >> primeRange;

    std::cout << "Prime numbers from 2 to " << primeRange << " are:\n 2 ";

    std::size_t number = 3;
    std::size_t i = 2;
    bool isPrime = true, isSqRooted = true;
    double squareRoot = 0.0;

    while (number <= primeRange)
    {
        if (isSqRooted)
        {
            squareRoot = sqrt(number);
            i = 2;
        }

        if (number % i != 0)
        {
            isSqRooted = false;
            ++i;
        }
        else
        {
            isPrime = false;
        }

        if (i > squareRoot && isPrime)
        {
            std::cout << number << " ";
            isSqRooted = true;
            number += 2;
        }
        else if (!isPrime)
        {
            isPrime = true;
            isSqRooted = true;
            number += 2;
        }
    }

    return EXIT_SUCCESS;
}
