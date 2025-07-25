#include <iostream>

/*
Goal: To count all the trailing zeroes in the factorial of a given number.

Examples:
    5!  = 120       → 1 trailing zero
    10! = 3628800   → 2 trailing zeroes
    100! = ....     → 24 trailing zeroes

Why NOT calculate factorial directly?
    - Factorial grows extremely fast (even 20! exceeds `long long int`)
    - Storing the full factorial is inefficient just to count zeroes

Optimization Insight:
    - Trailing zeroes are caused by multiplying factors of 10
    - 10 = 2 × 5 → so for every (2,5) pair, we get one trailing zero
    - In n!, 2s are more frequent than 5s → so number of 5s limits zeroes

    For example:
        10! = 1×2×3×...×10
            = has 8 factors of 2, and only 2 factors of 5 → only 2 zeroes

Trick:
    - Count how many times 5 is a factor in numbers from 1 to n
    - Include powers of 5 like 25, 125, 625 etc.

    Formula:
        trailing zeroes in n! = ⌊n/5⌋ + ⌊n/25⌋ + ⌊n/125⌋ + ...

    Example: n = 100
        100 / 5   = 20  → twenty numbers give one 5
        100 / 25  = 4   → four numbers give a second 5
        100 / 125 = 0   → done
        Total = 20 + 4 = 24 trailing zeroes
*/

int main() {
    int number, count_zeroes = 0;

    std::cout << "Enter a number to find trailing zeroes in its factorial: ";
    std::cin >> number;

    for (int i = 5; number / i > 0; i *= 5) {
        count_zeroes += number / i;
    }

    std::cout << "Number of trailing zeroes in " << number << "! is: " << count_zeroes;
    return 0;
}
