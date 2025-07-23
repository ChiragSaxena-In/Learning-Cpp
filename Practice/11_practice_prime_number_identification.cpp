#include <iostream>
#include <cmath> // For sqrt()

/*
Goal: Identify whether the given number is a prime number or not.

Definition: A prime number is a number greater than 1 that has no divisors other than 1 and itself.

We’ll use two methods to check if a number is prime:

-------------------------------------------------------
🟢 Method 1: Brute Force
- Check if the number is divisible by any number from 2 to (n - 1)
- Works fine for small numbers
- Becomes very slow for large numbers

🟢 Method 2: Optimized using Square Root (√n)
- Key Idea:
    If n = a × b, then one of them must be ≤ √n
    Because if both a and b > √n, then a × b > n (which is impossible)
- So, if no divisor exists up to √n, then no divisor will exist after it either.
- This makes checking faster — instead of checking 2 to n-1, we just check up to √n
-------------------------------------------------------

Examples:

n = 36 → √36 = 6  
Factors: (2×18), (3×12), (4×9), (6×6) — one of each pair is always ≤ 6

n = 29 → √29 ≈ 5.38  
Only need to check 2 to 5 — no divisors ⇒ Prime

n = 97 → √97 ≈ 9.8  
Only need to check 2 to 9 — no divisors ⇒ Prime
*/

int main() {
    int number;
    bool isPrimeBrute = true;
    bool isPrimeSqrt = true;

    std::cout << "Enter a number to check whether it's a prime number or not: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << number << " is not a Prime Number! (Primes start from 2)" << std::endl;
        return 0;
    }

    // --------- Method 1: Brute Force (2 to n-1) ---------
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrimeBrute = false;
            break;
        }
    }

    // --------- Method 2: Optimized (2 to √n) ---------
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrimeSqrt = false;
            break;
        }
    }

    // --------- Output both methods ---------
    std::cout << "\n-- Method 1 (Brute Force): ";
    if (isPrimeBrute) std::cout << number << " is a Prime Number!" << std::endl;
    else std::cout << number << " is NOT a Prime Number!" << std::endl;

    std::cout << "-- Method 2 (Optimized √n): ";
    if (isPrimeSqrt) std::cout << number << " is a Prime Number!" << std::endl;
    else std::cout << number << " is NOT a Prime Number!" << std::endl;

    return 0;
}
