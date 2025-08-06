#include <iostream>

/*
-------------------------
This program demonstrates the basic usage of the WHILE loop in C++.

A while loop is used when:
- You want to repeat a block of code **as long as a condition is true**.
- You do NOT know in advance how many times to run the loop.

Syntax:
--------
while (condition) {
    // code to repeat
}
*/

int main() {

    // Example 1: Print numbers from 1 to 5 using while loop
    int i = 1;

    std::cout << "Example 1: Print numbers from 1 to 5:\n";
    while (i <= 5) {
        std::cout << i << " ";
        i++;
    }
    std::cout << "\n\n";

    // Example 2: Countdown from 5 to 1
    int count = 5;

    std::cout << "Example 2: Countdown from 5 to 1:\n";
    while (count > 0) {
        std::cout << count << " ";
        count--;
    }
    std::cout << "\n\n";

    // Example 3: Sum of digits of a number using while loop
    int number;
    std::cout << "Example 3: Enter a number to find sum of its digits: ";
    std::cin >> number;

    int sum = 0;
    int temp = number; // Store original number

    while (temp != 0) {
        sum += temp % 10;      // Add last digit
        temp /= 10;            // Remove last digit
    }

    std::cout << "Sum of digits of " << number << " = " << sum << "\n";

    return 0;
}
