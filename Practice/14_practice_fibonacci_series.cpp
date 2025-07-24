#include <iostream>

/*
  Goal: Print the Fibonacci series up to the nth term

  Fibonacci Series:
     Starts with: 0, 1
     Each term after that is the sum of the previous two terms.

     Example:
     0, 1, 1, 2, 3, 5, 8, 13, 21, ...

     last     = 0
     previous = 1
     current  = last + previous
*/

int main() {

    int nth_term;
    int last_term = 0, previous_term = 1, current_term;

    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> nth_term;

    if (nth_term < 1) {
        std::cout << "Number of terms must be at least 1.\n";
        return 0;
    }

    std::cout << "\nFibonacci Series up to " << nth_term << " term(s):\n";

    if (nth_term >= 1) std::cout << "0";
    if (nth_term >= 2) std::cout << ", 1";

    // Loop starts from 3rd term (Since 1st and 2nd term handled above!)
    for (int i = 3; i <= nth_term; i++) {
        current_term = last_term + previous_term;
        std::cout << ", " << current_term;

        // Update for next loop
        last_term = previous_term;
        previous_term = current_term;
    }

    std::cout << std::endl;
    return 0;
}
