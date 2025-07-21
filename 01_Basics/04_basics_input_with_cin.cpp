#include <iostream>
using namespace std;

int main() {
    // -------------------- Basic Integer Input --------------------
    int age;
    cout << "Enter your age: ";
    cin >> age;  // Takes input from user and stores in 'age'
    cout << "You entered age = " << age << endl;

    // -------------------- Input Multiple Values --------------------
    int x, y;
    cout << "Enter two integers separated by space: ";
    cin >> x >> y;
    cout << "x = " << x << ", y = " << y << endl;

    // -------------------- Input Characters --------------------
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;
    cout << "You entered character = " << ch << endl;

    // -------------------- Input a Word (Single Word String) --------------------
    string word;
    cout << "Enter a word (no spaces): ";
    cin >> word;
    cout << "Word entered = " << word << endl;

    // -------------------- Input a Full Line (with spaces) --------------------
    cin.ignore(); // Clear the leftover newline from previous input
    string fullLine;
    cout << "Enter a full sentence (with spaces): ";
    getline(cin, fullLine);  // Reads the whole line including spaces
    cout << "You entered: " << fullLine << endl;

    // -------------------- Note --------------------
    // cin >> only reads input until the first space/newline.
    // getline() reads the entire line including spaces.
    // Always use cin.ignore() before getline() to avoid issues.

    return 0;
}
