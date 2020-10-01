#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{

    std::size_t number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    bool isPrime = true;
    const double squareRoot = sqrt(number);
    for (std::size_t i = 2; i <= squareRoot; ++i)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        std::cout << number << " is a PRIME number.\n";
    }
    else
    {
        std::cout << number << " is NOT a PRIME number.\n";
    }

    // std::cout << number << (isPrime ? " is" : " is NOT") << " a PRIME number.\n";

    return EXIT_SUCCESS;
}
