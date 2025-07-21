#include <iostream>  // for cout, endl
using namespace std;

int main() {

    // -------------------- DATA TYPES AND SUFFIXES --------------------
    short s = 10;                  // 2 bytes
    int i = 20;                    // 4 bytes

    long l = 30L;                  // 4 or 8 bytes (machine-dependent), 'L' forces literal to be long (vs just int)
    long long ll = 1234567890123LL; // Typically 8 bytes, 'LL' makes the literal long long 

    float f = 3.14f;               // 4 bytes, 'f' suffix treats it as float (not double)
    double d = 3.14159;            // 8 bytes, By default, decimals are treated as double
    long double ld = 3.1415926535L; // 10–16 bytes (platform-dependent), 'L' forces literal to be long double

    char ch = 'A';                 // 1 byte, stores ASCII value
    bool flag = true;             // 1 byte, holds true (1) or false (0)

    // -------------------- SIZE OF EACH TYPE --------------------
    cout << "--- Data Types and Their Sizes ---" << endl;
    cout << "short: " << sizeof(s) << " bytes" << endl;
    cout << "int: " << sizeof(i) << " bytes" << endl;
    cout << "long: " << sizeof(l) << " bytes" << endl;
    cout << "long long: " << sizeof(ll) << " bytes" << endl;
    cout << "float: " << sizeof(f) << " bytes" << endl;
    cout << "double: " << sizeof(d) << " bytes" << endl;
    cout << "long double: " << sizeof(ld) << " bytes" << endl;
    cout << "char: " << sizeof(ch) << " byte" << endl;
    cout << "bool: " << sizeof(flag) << " byte" << endl;

    // -------------------- TYPE CASTING EXAMPLES --------------------
    cout << "\n--- Type Casting Examples ---" << endl;

    // Implicit: int → double
    int score = 95;
    double preciseScore = score; // widening conversion
    cout << "Implicit: int → double = " << preciseScore << endl;

    // Explicit: double → int (fraction lost)
    double pi = 3.14159;
    int piAsInt = (int) pi;
    cout << "Explicit: double → int = " << piAsInt << " (fraction lost)" << endl;

    // char → int → char
    char letter = 'B';
    int ascii = (int)letter;
    cout << "char → int (ASCII of 'B') = " << ascii << endl;

    int code = 67;
    char symbol = (char)code;
    cout << "int → char (char for 67) = " << symbol << endl;

    // float ↔ double
    float shortPi = 3.14f;
    double fullPi = shortPi; // float → double
    cout << "float → double = " << fullPi << endl;

    double precise = 3.1415926;
    float lessPrecise = (float)precise; // may lose precision
    cout << "double → float = " << lessPrecise << " (may lose precision)" << endl;

    // bool ↔ int
    bool status = false;
    int truth = status;  // bool → int
    cout << "bool false → int = " << truth << endl;

    int number = 5;
    bool check = (bool)number; // 0 is false, anything else is true
    cout << "int 5 → bool = " << check << endl;

    // DATA LOSS:
    // When converting from a larger data type (like long long) to a smaller one (like int),
    // the value may **not fit** in the destination type’s range. This leads to truncation,
    // overflow, or unexpected results — called **data loss**.
    // for ex:
    long long bigValue = 9999999999LL;
    int smallValue = (int)bigValue;  // long long → int (narrowing conversion)
    cout << "long long → int = " << smallValue << " (possible data loss)" << endl;

    // unsigned → signed (may wrap)
    unsigned int u = 4294967295; // Max unsigned 32-bit int
    int signedInt = (int)u;
    cout << "unsigned int → int = " << signedInt << " (wraparound on overflow)" << endl;

    // -------------------- TYPE PROMOTION ORDER --------------------
    cout << "\n--- Safe Type Promotion Order ---" << endl;
    cout << "bool < char < short < int < unsigned int < long < long long < float < double < long double" << endl;
    cout << "✓ Safe to move left → right (widening)\n✗ Risky right → left (narrowing, data loss)" << endl;

    return 0; // Success exit status
}
