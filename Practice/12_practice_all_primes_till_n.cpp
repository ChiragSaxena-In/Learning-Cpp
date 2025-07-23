#include <iostream>

/*
Goal: To print all the prime numbers till a given number.

Logic:
- Loop from i = 2 to number
- For each i, check if it's divisible by any number from 2 to sqrt(i)
- If not divisible → prime → print it
*/

int main() {

    int number;
    bool isPrime;

    std::cout << "Enter a number to print all the prime numbers till the given number: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << "There are no prime numbers less than 2." << std::endl;
        return 0;
    }

    std::cout << "Prime numbers up to " << number << " are: ";

    for (int i = 2; i <= number; i++) {
        isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break; // No need to check further
            }
        }

        if (isPrime)
            std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
