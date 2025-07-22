#include <iostream>
using namespace std;

int main() {

    // -------------------- What is a Nested if? --------------------
    /*
       A nested if is an if-statement inside another if-statement.
       It helps build more complex decisions when multiple conditions depend on each other.
    */

    // -------------------- 1. Check if number is positive and even --------------------
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;

        if (num % 2 == 0) {
            cout << "It is also even." << endl;
        }
        else {
            cout << "But it is odd." << endl;
        }
    }
    else {
        cout << "The number is not positive." << endl;
    }

    // -------------------- 2. Grading system using nested if --------------------
    int marks;
    cout << "\nEnter your marks (0 - 100): ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 90) {
            cout << "Grade: A+" << endl;
        }
        else if (marks >= 75) {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 60) {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 40) {
            cout << "Grade: C" << endl;
        }
        else {
            cout << "Grade: F (Fail)" << endl;
        }
    }
    else {
        cout << "Invalid input! Marks must be between 0 and 100." << endl;
    }

    // -------------------- 3. Login system with nested if --------------------
    string username, password;
    cout << "\nEnter username: ";
    cin >> username;

    if (username == "admin") {
        cout << "Enter password: ";
        cin >> password;

        if (password == "1234") {
            cout << "Access granted!" << endl;
        }
        else {
            cout << "Incorrect password." << endl;
        }
    }
    else {
        cout << "Username not found." << endl;
    }

    // -------------------- 4. Leap Year Checker --------------------
    /*
       Leap year rule:
       - Divisible by 4 → Might be leap
       - But if divisible by 100 → NOT a leap year
       - Unless also divisible by 400 → Then leap year
    */

    int year;
    cout << "\nEnter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            }
            else {
                cout << year << " is NOT a leap year." << endl;
            }
        }
        else {
            cout << year << " is a leap year." << endl;
        }
    }
    else {
        cout << year << " is NOT a leap year." << endl;
    }

    return 0;
}
