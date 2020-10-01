#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{
    std::size_t number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // check if number is prime

    bool isPrime = true;
    double squareRoot = sqrt(number);
    for (std::size_t i = 2; i <= squareRoot; ++i)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (!isPrime)
    {
        std::cout << number << " is NOT a PRIME number.\n";
        return EXIT_SUCCESS;
    }

    std::cout << number << " is a PRIME number.\n";

    // if number is prime, reverse it and proceed with emirp test

    std::size_t reversedNumber = 0;
    for (std::size_t n = number; n > 0; n /= 10)
    {
        reversedNumber = (reversedNumber * 10) + (n % 10);
    }

    // check if the reversed number is an emirp number

    bool isEmirp = true;
    squareRoot = sqrt(reversedNumber);
    for (std::size_t i = 2; i <= squareRoot; ++i)
    {
        if (reversedNumber % i == 0)
        {
            isEmirp = false;
            break;
        }
    }

    if (isEmirp)
    {
        std::cout << reversedNumber << " is also an EMIRP number.\n";
    }
    else
    {
        std::cout << reversedNumber << " is NOT an EMIRP number.\n";
    }

    return EXIT_SUCCESS;
}
