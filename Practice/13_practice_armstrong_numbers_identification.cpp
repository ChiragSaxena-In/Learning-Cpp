#include <iostream>

/*
  Goal: Check whether a number is an Armstrong Number (Narcissistic Number).

  What is an Armstrong Number?
     A number is an Armstrong Number if the sum of its digits raised to the power
     of total digits is equal to the number itself.

     Examples:
       - 153  => 1^3 + 5^3 + 3^3 = 153 ✔️
       - 9474 => 9^4 + 4^4 + 7^4 + 4^4 = 9474 ✔️
       - 123  => 1^3 + 2^3 + 3^3 ≠ 123 ❌

  Digit Extraction Logic:
     For number = 123:
       - 123 % 10 = 3 → last digit
       - 123 / 10 = 12
       - 12 % 10 = 2
       - 12 / 10 = 1
       - 1 % 10 = 1
       - 1 / 10 = 0 → loop ends
*/

int main() {

    int number, original, digit, count = 0;
    int result = 0;

    std::cout << "\nEnter a number to check if it's an Armstrong Number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter a Positive number only.\n";
        return 0;
    }

    original = number;

    // Step 1: Count number of digits
    for (int i = number; i > 0; i /= 10) {
        count++;
    }

    // Step 2: Extract each digit and calculate digit^count
    for (int j = number; j > 0; j /= 10) {
        digit = j % 10;

        int power = 1;
        for (int k = 0; k < count; k++) {
            power *= digit;
        }

        result += power;
    }

    // Step 3: Compare with original number
    std::cout << "\n Result: ";
    if (result == original)
        std::cout << original << " is an Armstrong Number!\n";
    else
        std::cout << original << " is NOT an Armstrong Number.\n";

    return 0;
}
