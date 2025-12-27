#include <iostream>

/*
Goal: Convert a number from any base to any other base (2 to 10).

Important Rule:
- Since strings are NOT allowed, digits must be numeric.
- Therefore bases greater than 10 (Hexadecimal) are excluded.

Conversion Strategy:
STEP 1 → Convert given number to Decimal
STEP 2 → Convert Decimal to target base

Example:
Base 2 → Base 8
101101 (base 2)

STEP 1:
Decimal = 1×2^5 + 0×2^4 + 1×2^3 + 1×2^2 + 0×2^1 + 1×2^0 = 45

STEP 2:
45 → base 8 = 55
*/

int main() {
    int number, fromBase, toBase;

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Enter source base (2 to 10): ";
    std::cin >> fromBase;

    std::cout << "Enter target base (2 to 10): ";
    std::cin >> toBase;

    if (fromBase < 2 || fromBase > 10 || toBase < 2 || toBase > 10) {
        std::cout << "Invalid base! Only bases 2 to 10 are supported.";
        return 0;
    }

    /* --------------------------------------------------
       STEP 1: Convert GIVEN BASE → DECIMAL
    -------------------------------------------------- */

    int temp = number;
    int decimal = 0;
    int power = 1;   // represents fromBase^0 initially

    // Extract digits from right to left
    for (; temp > 0; ) {
        int digit = temp % 10;

        // Digit validation
        if (digit >= fromBase) {
            std::cout << "Invalid digit for given base!";
            return 0;
        }

        decimal += digit * power;
        power *= fromBase;
        temp /= 10;
    }

    /* --------------------------------------------------
       STEP 2: Convert DECIMAL → TARGET BASE
    -------------------------------------------------- */

    temp = decimal;
    int result = 0;
    int place = 1;

    while (temp > 0) {
        int remainder = temp % toBase;
        result += remainder * place;
        place *= 10;
        temp /= toBase;
    }

    std::cout << "\nConverted value: " << result;
    return 0;
}
