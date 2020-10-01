#include <iostream>
#include <cmath>
#include <cstdlib>

bool isPrime(const std::size_t number);

int main()
{
    unsigned int primeRange = 0;
    std::cout << "Enter a range for prime numbers: ";
    std::cin >> primeRange;

    std::cout << "Prime numbers from 2 to " << primeRange << " are:\n"
              << " 2 "; // There's only one even prime number i.e. 2;
                        // we can skip all the remaining even numbers.

    for (std::size_t number = 3; number <= primeRange; number += 2)
    {
        if (isPrime(number))
        {
            std::cout << number << " ";
        }
    }

    return EXIT_SUCCESS;
}

bool isPrime(const std::size_t number)
{
    const double squareRoot = sqrt(number);
    for (std::size_t i = 2; i <= squareRoot; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}
