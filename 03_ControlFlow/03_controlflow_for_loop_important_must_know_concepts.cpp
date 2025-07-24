#include <iostream>

/*
Goal: Master common digit-based tricks using loops (especially `for` loops).

Pattern to remember:
    for (int j = num; j > 0; j /= 10) {
        int digit = j % 10;
        // Work with 'digit'
    }

1. Count number of digits:
-----------------------------------
    int count = 0;
    for (int j = num; j > 0; j /= 10) {
        count++;
    }

 2. Sum of digits:
-----------------------------------
    int sum = 0;
    for (int j = num; j > 0; j /= 10) {
        sum += j % 10;
    }

 3. Product of digits:
-----------------------------------
    int product = 1;
    for (int j = num; j > 0; j /= 10) {
        product *= j % 10;
    }

 4. Reverse a number:
-----------------------------------
    int reversed = 0;
    for (int j = num; j > 0; j /= 10) {
        reversed = reversed * 10 + (j % 10);
    }

 5. Check for digit presence:
-----------------------------------
    bool found = false;
    for (int j = num; j > 0; j /= 10) {
        if (j % 10 == targetDigit) {
            found = true;
            break; // Optional: early exit
        }
    }

 6. Highest and Lowest digits:
-----------------------------------
    int highest = 0, lowest = 9;
    for (int j = num; j > 0; j /= 10) {
        int digit = j % 10;
        if (digit > highest) highest = digit;
        if (digit < lowest)  lowest = digit;
    }

 7. Square sum of digits (used in Happy Number):
-----------------------------------
    int sum = 0;
    for (int j = num; j > 0; j /= 10) {
        int digit = j % 10;
        sum += digit × digit;
    }

 8. Cube sum of digits (used in Armstrong):
-----------------------------------
    int sum = 0;
    for (int j = num; j > 0; j /= 10) {
        int digit = j % 10;
        sum += digit × digit × digit;
    }

 9. Get last N digits of a number:
-----------------------------------
    last N digits = number % (10^N)
    Example: 12345 % 100 = 45 (last 2 digits)

 10. Remove last N digits:
-----------------------------------
    number without last N = number / (10^N)
    Example: 12345 / 100 = 123 (remove last 2 digits)

 11. Append a digit to the right:
-----------------------------------
    number = number × 10 + digit

 12. Prepend a digit to the left:
-----------------------------------
    number = digit × (10^number_of_digits) + number

 13. Check for palindrome:
-----------------------------------
    int original = num;
    int reversed = 0;
    for (int j = num; j > 0; j /= 10) {
        reversed = reversed * 10 + (j % 10);
    }
    if (original == reversed) {
        // It's a palindrome
    }

 14. Digital root (repeat digit sum till single digit):
-----------------------------------
    int root = num;
    while (root >= 10) {
        int temp = 0;
        for (int j = root; j > 0; j /= 10) {
            temp += j % 10;
        }
        root = temp;
    }

*/

int main() {
    std::cout << "Refer to code comments above for common digit manipulation tricks.\n";
}
