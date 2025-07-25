#include <iostream>

/*
Goal: Check whether the given number is a Perfect Number.

What is a Perfect Number?
→ A number whose **sum of its proper divisors** (excluding the number itself) equals the number.

Examples:
- 6  = 1 + 2 + 3        → Perfect Number
- 28 = 1 + 2 + 4 + 7 + 14 → Perfect Number
- 12 = 1 + 2 + 3 + 6    ≠ 12 → Not a Perfect Number

Optimization:
- 1 is always a divisor → add it directly.
- No divisor (except the number itself) is greater than (number / 2).
→ So loop only from 2 to number/2 to save time.
*/

int main() {

    int number;
    int sum = 1; // Start with 1 included as a proper divisor

    std::cout << "Enter a number to check whether it's a Perfect Number: ";
    std::cin >> number;

    if (number < 1) {
        std::cout << "Please enter an integer greater than 0.\n";
        return 0;
    }

    // Step 1: Add all divisors from 2 to number/2
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Step 2: Compare sum of divisors with the number itself
    if (sum == number && number != 1) {
        std::cout << number << " is a Perfect Number!\n";
    } else {
        std::cout << number << " is NOT a Perfect Number.\n";
    }

    return 0;
}
