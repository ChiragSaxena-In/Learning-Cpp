#include <iostream>

/*
Patterns Covered: For number = 5
*/

int main() {

    int number;
    std::cout << "Enter a number to print the pattern accordingly: ";
    std::cin >> number;

    // ------------------------------------------------------------
    /*
    Desired Output:
            * 
          * * 
        * * * 
      * * * * 
    * * * * *

    Pattern Logic:
    - Total rows = number.
    - Each row has (number - row) spaces, followed by (row) stars.
    - Each space is printed as "  " (two spaces) to align star pattern properly.
    */

    for (int row = 1; row <= number; row++) {

        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " "; // 2nd space is the space b/w spaces
        }

        for (int star = 1; star <= row; star++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    // If we removed that double space i.e std::cout << " " << " "; --> std::cout << " ";
    // Then we will get this:
    /*
        *     
       * *    
      * * *   
     * * * *  
    * * * * * 
    */

    // ------------------------------------------------------------
    /*
    Desired Output:
            1 
          2 2 
        3 3 3 
      4 4 4 4 
    5 5 5 5 5

    Pattern Logic:
    - Similar to star pyramid, but instead of '*', we print the current row number repeatedly.
    */

    for (int row = 1; row <= number; row++) {

        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (int col = 1; col <= row; col++) {
            std::cout << row << " ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
            1 
          1 2 
        1 2 3 
      1 2 3 4 
    1 2 3 4 5

    Pattern Logic:
    - Left aligned number pyramid.
    - Each row prints numbers from 1 up to the current row number.
    */

    for (int row = 1; row <= number; row++) {

        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (int col = 1; col <= row; col++) {
            std::cout << col << " ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
            A 
          A B 
        A B C 
      A B C D 
    A B C D E

    Pattern Logic:
    - Alphabet pyramid increasing from 'A' up to (A + row - 1).
    - Total characters in each row = current row number.
    */

    for (int row = 1; row <= number; row++) {

        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (char alphabet = 'A'; alphabet <= 'A' + (row - 1); alphabet++) {
            std::cout << alphabet << " ";
        }

        /*
        OR:

        for (int col = 1; col <= row; col++) {
            char alphabet = 'A' + (col - 1);
            std::cout << alphabet << " ";
        }
        */

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
            A 
          B A 
        C B A 
      D C B A 
    E D C B A

    Pattern Logic:
    - Each row prints characters in reverse from (A + row - 1) down to 'A'.
    - Similar to numeric reverse triangle but with alphabets.
    */

    for (int row = 1; row <= number; row++) {

        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (int col = row; col > 0; col--) {
            char alphabet = 'A' + (col - 1);
            std::cout << alphabet << " ";
        }

        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
            1 
          2 1 
        3 2 1 
      4 3 2 1 
    5 4 3 2 1

    Pattern Logic:
    - Reverse number triangle where each row prints numbers from row down to 1.
    - Spaces used for pyramid alignment.
    */

    for (int row = 1; row <= number; row++) {

        for (int space = 1; space <= number - row; space++) {
            std::cout << " " << " ";
        }

        for (int col = row; col > 0; col--) {
            std::cout << col << " ";
        }

        std::cout << "\n";
    }

    return 0;
}
