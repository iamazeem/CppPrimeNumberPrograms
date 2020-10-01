#include <iostream>
#include <cmath>
#include <cstdlib>

bool isPrime(const std::size_t number);

int main()
{
    std::size_t number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number))
    {
        std::cout << number << " is a PRIME number.\n";
    }
    else
    {
        std::cout << number << " is NOT a PRIME number.\n";
    }

    // std::cout << number << (isPrime(number) ? " is" : " is NOT") << " a PRIME number.\n";

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
