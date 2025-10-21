#include <iostream>

/*
Goal: Check whether a given number is a Palindrome Number.

What is a Palindrome Number?
→ A number that reads the same forward and backward.

Examples:
- 121 → Palindrome
- 123 → Not a Palindrome
- 1221 → Palindrome

Approach:
1. Reverse the number.
2. Compare the reversed number with the original.
*/

int main() {

    int number, reversed_number = 0;

    std::cout << "Enter a number to check whether it's a Palindrome Number: ";
    std::cin >> number;

    // Ensure the number has at least two digits
    if (number >= 0 && number < 10) {
        std::cout << "Please enter a number with at least 2 digits.\n";
        return 0;
    }

    // Negative numbers are not palindromes
    // Numbers ending with 0 (but not 0 itself) can't be palindrome
    if (number < 0 || (number % 10 == 0 && number != 0)) {
        std::cout << number << " is NOT a Palindrome Number.\n";
        return 0;
    }

    int original_number = number; // Save the original number for comparison

    // Step 1: Reverse the number
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        reversed_number = reversed_number * 10 + digit;
        temp /= 10;
    }

    // Step 2: Check for palindrome
    if (reversed_number == original_number) {
        std::cout << original_number << " is a Palindrome Number!\n";
    } else {
        std::cout << original_number << " is NOT a Palindrome Number.\n";
    }

    return 0;
}
