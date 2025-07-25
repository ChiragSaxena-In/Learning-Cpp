#include <iostream>

/*
Goal: To check whether the given number is a Strong number (also known as Krishnamurthy Number).

What is a Strong Number?
- A number whose sum of factorials of its digits equals the number itself.

Example:
    145 = 1! + 4! + 5! = 145 → Strong Number ✅
    120 = 1! + 2! + 0! = 3   → Not a Strong Number ❌

Optimization:
- Exit early if the factorial sum exceeds the number during the process.
*/

int main() {
    int number, sum = 0;

    std::cout << "Enter a number to check whether it's a Strong Number or not: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << "Please enter a number greater than 2!"; // 1 is not considered a Strong number
        return 0;
    }

    // Keep original number for final comparison
    int original = number;

    // Step 1: Loop through each digit
    for (int i = number; i > 0; i /= 10) {
        int digit = i % 10;
        int factorial = 1;

        // Step 2: Calculate factorial of the digit
        for (int j = 1; j <= digit; j++) {
            factorial *= j;
        }

        // Step 3: Add factorial to sum
        sum += factorial;

        // Step 4: Early exit if sum already exceeds the original number
        if (sum > original) {
            std::cout << original << " is not a Strong Number!";
            return 0;
        }
    }

    // Step 5: Final check
    if (sum == original) {
        std::cout << original << " is a Strong Number!";
    } else {
        std::cout << original << " is not a Strong Number!";
    }

    return 0;
}
