#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{
    std::size_t primeRange = 0;
    std::cout << "Enter prime limit: ";
    std::cin >> primeRange;

    // if even, make it odd
    if (primeRange % 2 == 0)
    {
        --primeRange;
    }

    while (primeRange >= 2)
    {
        bool isPrime = true;
        const double squareRoot = sqrt(primeRange);

        for (std::size_t i = 2; i <= squareRoot; ++i)
        {
            if (primeRange % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << primeRange << " ";
        }

        if (primeRange > 3)
        {
            primeRange -= 2;
        }
        else
        {
            primeRange -= 1;
        }
    }

    return EXIT_SUCCESS;
}
