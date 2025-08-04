#include <iostream>

/*
Patterns Covered for Number = 5;
*/

int main() {

    int number;
    std::cout << "Enter a number to print the pattern accordingly: ";
    std::cin >> number;

    // ------------------------------------------------------------
    /*
    Desired Output:
            *         
          * * *       
        * * * * *     
      * * * * * * *   
    * * * * * * * * *

    Pattern Logic:
    - Print pyramid with center alignment using spaces.
    - For each row:
      - Print (number - row) double spaces → for left padding.
      - Print (2 * row - 1) stars with spaces between.
    - NOTE: Using "  " (double space) is crucial; removing it will break alignment.
    */

    for (int row = 1; row <= number; row++) {
        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (int star = 1; star <= ((2 * row) - 1); star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
            1         
          1 2 1       
        1 2 3 2 1     
      1 2 3 4 3 2 1   
    1 2 3 4 5 4 3 2 1

    Pattern Logic:
    - Center-aligned number pyramid.
    - Print increasing numbers till row, then decreasing to 1.
    - (number - row) double spaces for alignment.
    - NOTE: "  " double space must be kept intact for proper alignment.
    */

    for (int row = 1; row <= number; row++) {
        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (int col = 1; col <= row; col++) {
            std::cout << col << " ";
        }

        for (int dec_col = row - 1; dec_col > 0; dec_col--) {
            std::cout << dec_col << " ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    * * * * * * * * * 
      * * * * * * *   
        * * * * *     
          * * *       
            * 

    Pattern Logic:
    - Inverted pyramid with decreasing stars and increasing double spaces.
    - Each row has (row - 1) double spaces.
    - Stars in row = (2 * number - 1) - 2 * (row - 1)
    - OR: You can think of it as ((2 * (number - row)) + 1) stars.
    - NOTE: Double space necessary for symmetrical alignment.
    */

    for (int row = 1; row <= number; row++) {
        for (int space = 1; space <= (row - 1); space++) {
            std::cout << " " << " ";
        }

        for (int star = 1; star <= ((2 * number) - 1) - (2 * (row - 1)); star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    } 

    // ------------------------------------------------------------
    /*
    Desired Output:
    * * * * * * * * * * 
    * * * *     * * * * 
    * * *         * * * 
    * *             * * 
    *                 * 
    *                 * 
    * *             * * 
    * * *         * * * 
    * * * *     * * * * 
    * * * * * * * * * *          

    Pattern Logic:
    - Upper and lower symmetrical pattern.
    - Each row = stars → double spaces → stars.
    - Upper: stars decrease, spaces increase.
    - Lower: stars increase, spaces decrease.
    - (2 * number) characters printed each row (including double spaces).
    - NOTE: Removing double space breaks structure.
    */

    for (int row = 1; row <= number; row++) {
        for (int star = 1; star <= ((number - row) + 1); star++) {
            std::cout << "* ";
        }

        for (int space = 1; space <= 2 * (row - 1); space++) {
            std::cout << " " << " ";
        }

        for (int star = 1; star <= ((number - row) + 1); star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    for (int row = 1; row <= number; row++) {
        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        for (int space = 1; space <= 2 * (number - row); space++) {
            std::cout << " " << " ";
        }

        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    *                 * 
    * *             * * 
    * * *         * * *
    * * * *     * * * * 
    * * * * * * * * * *
    * * * *     * * * * 
    * * *         * * *
    * *             * *
    *                 * 

    Pattern Logic:
    - Upper: increasing stars with decreasing double spaces.
    - Lower: decreasing stars with increasing double spaces.
    - Each row: stars → spaces → stars.
    - Total characters in a row (excluding spaces) = 2 * row (or 2 * (number - row + 1))
    - NOTE: Double spaces required for clean symmetry.
    */

    for (int row = 1; row <= number; row++) {
        for (int star = 1; star <= row; star++) { 
            std::cout << "* ";
        }

        for (int space = 1; space <= 2 * (number - row); space++) {
            std::cout << " " << " ";
        }

        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    for (int row = number - 1; row > 0; row--) {
        for (int star = 1; star <= row; star++) { 
            std::cout << "* ";
        }

        for (int space = 1; space <= 2 * (number - row); space++) {
            std::cout << " " << " ";
        }

        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
        * 
       * *
      * * *
     * * * *
    * * * * *
    * * * * *
     * * * *
      * * *
       * *
        *

    Pattern Logic:
    - Simple upright and inverted pyramid.
    - Left padding using single spaces for center alignment.
    - Stars increase (1 to n), then decrease (n to 1).
    - No double space used here, spacing is managed differently.
    - NOTE: Logic for this space is simpler; " " is used for alignment, not "  ".
    */

    for (int row = 1; row <= number; row++) {
        for (int space = 1; space <= (number - row); space++) {
            std::cout << " ";
        }

        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    for (int row = number; row > 0; row--) {
        for (int space = 1; space <= (number - row); space++) {
            std::cout << " ";
        }

        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

}
