#include <iostream>
#include <cmath>
#include <cstdlib>

bool isPrime(const std::size_t number);
bool isEmirp(const std::size_t number);
std::size_t reverseNumber(std::size_t number);

int main()
{
    std::size_t number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number))
    {
        std::cout << number << " is NOT a PRIME number.\n";
        return EXIT_SUCCESS;
    }

    std::cout << number << " is a PRIME number.\n";

    if (isEmirp(number))
    {
        std::cout << number << " is also an EMIRP number.\n";
    }
    else
    {
        std::cout << number << " is NOT an EMIRP number.\n";
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

bool isEmirp(const std::size_t number)
{
    const std::size_t reversedNumber = reverseNumber(number);
    return isPrime(reversedNumber);
}

std::size_t reverseNumber(std::size_t number)
{
    std::size_t reversedNumber = 0;
    while (number > 0)
    {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number /= 10;
    }

    return reversedNumber;
}
