#include <iostream>

/*
Goal: To calculate the digital root of the given number.

What's Digital Root?
- Keep summing the digits until a single digit remains.

Example: 
9875 → 9 + 8 + 7 + 5 = 29 → 2 + 9 = 11 → 1 + 1 = 2 (Digital Root)

Idea: 
- Use an indefinite for-loop to repeat digit summing until sum becomes a single-digit.
*/

int main() {
    int number, sum;
    
    std::cout << "Enter a number to calculate its digital root: ";
    std::cin >> number;

    if (number < 10) {
        std::cout << "Please enter a number greater than 9!";
        return 0;
    }

    int original = number;

    sum = number; // initialize sum before the loop

    for ( ; sum > 9; ) {
        number = sum;
        sum = 0;

        for (int j = number; j > 0; j /= 10) {
            sum += j % 10;
        }
    }

    std::cout << "Digital Root of " << original << " is: " << sum;
    return 0;
}
