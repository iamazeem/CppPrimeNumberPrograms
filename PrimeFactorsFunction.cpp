#include <iostream>
#include <cstdlib>

void printPrimeFactors(std::size_t number);

int main()
{
    std::size_t number = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    printPrimeFactors(number);

    return EXIT_SUCCESS;
}

void printPrimeFactors(std::size_t number)
{
    std::cout << "The prime factors of " << number << " are:\n";

    std::size_t i = 2;
    while (number > 1)
    {
        if (number % i == 0)
        {
            std::cout << i << " ";
            number /= i;
            i = 2;
        }
        else
        {
            i++;
        }
    }
}
