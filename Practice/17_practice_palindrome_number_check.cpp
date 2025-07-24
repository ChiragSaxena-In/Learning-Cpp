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

    if (number < 0) {
        std::cout << "Negative numbers are not considered Palindromes.\n";
        return 0;
    }

    int original_number = number; // Save the original number for comparison

    // Step 1: Reverse the number
    for (int i = number; i > 0; i /= 10) {
        int digit = i % 10;
        reversed_number = reversed_number * 10 + digit;
    }

    // Step 2: Check for palindrome
    if (reversed_number == original_number) {
        std::cout << original_number << " is a Palindrome Number!\n";
    } else {
        std::cout << original_number << " is NOT a Palindrome Number.\n";
    }

    return 0;
}
