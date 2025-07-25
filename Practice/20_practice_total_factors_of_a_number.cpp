#include <iostream>

/*
Goal: To calculate and print all the factors of a given number.

Example: 12 → 1, 2, 3, 4, 6, 12

Optimization Idea:
- A factor is any number that divides the given number completely.
- No factor (except the number itself) is greater than number/2.
- So we check from 2 to number/2 to find remaining factors.
*/

int main() {
    int number, count_factors = 0;

    std::cout << "Enter a number to find its factors: ";
    std::cin >> number;

    if (number < 1) {
        std::cout << "Please enter a number greater than 0!";
        return 0;
    }

    std::cout << "The factors of " << number << " are: ";

    // 1 is always a factor
    std::cout << "1";
    count_factors++;

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            std::cout << ", " << i;
            count_factors++;
        }
    }

    // The number itself is also a factor
    if (number != 1) {
        std::cout << ", " << number;
        count_factors++;
    }

    std::cout << "\nTotal number of factors: " << count_factors;
    return 0;
}
