#include <iostream>
using namespace std;

int main() {

/*
- Arithmetic Operators:
+  : Addition
-  : Subtraction
*  : Multiplication
/  : Division (integer division if both are int)
%  : Modulus (remainder)

- Comparison (Relational) Operators:
== : Equal to
!= : Not equal to
>  : Greater than
<  : Less than
>= : Greater than or equal to
<= : Less than or equal to

- Logical Operators (used for conditions):
&& : Logical AND (true only if both conditions are true)
|| : Logical OR (true if at least one condition is true)
!  : Logical NOT (inverts the condition: true → false)

- Assignment Operators:
=   : Assign value (a = 10)
+=  : a += b → a = a + b
-=  : a -= b → a = a - b
*=  : a *= b → a = a * b
/=  : a /= b → a = a / b
%=  : a %= b → a = a % b

- Increment and Decrement:
++a : Pre-increment → Increments *before* use
a++ : Post-increment → Increments *after* use

--a : Pre-decrement → Decrements *before* use
a-- : Post-decrement → Decrements *after* use

Example:
    int x = 5;
    cout << ++x;  // prints 6 (increment first, then use)
    cout << x++;  // prints 6 (use current, then increment)

- Bitwise Operators (work on bits, useful in advanced logic and optimization):
&  : Bitwise AND  
|  : Bitwise OR  
^  : Bitwise XOR (exclusive OR)
~  : Bitwise NOT (inverts all bits)
<< : Left shift (moves bits left; multiplies by 2 each shift)
>> : Right shift (moves bits right; divides by 2 each shift)

Example:
    int a = 5;       // binary: 0101
    int b = 3;       // binary: 0011

    a & b  → 1       // 0101 & 0011 = 0001
    a | b  → 7       // 0101 | 0011 = 0111
    a ^ b  → 6       // 0101 ^ 0011 = 0110
    ~a     → -6      // flips all bits (2's complement)
    a << 1 → 10      // 0101 becomes 1010 (multiplied by 2)
    a >> 1 → 2       // 0101 becomes 0010 (divided by 2)
*/


    // -------------------- 1. Positive, Negative, or Zero --------------------
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    // -------------------- 2. Even or Odd --------------------
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    }
    else {
        cout << num << " is odd." << endl;
    }

    // -------------------- 3. Voter Eligibility --------------------
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age>=18) {
        cout<<"You are eligible to vote!";
    } else { //An alternative to else if
        if (age==0) {
            cout<<"You are yet to born kid!";
        } else {
            cout<<"You are not yet eligible to vote!\n"<<"Wait for another "<<18-age<<" years to be able to vote!";
        }  
    }

    // -------------------- 4. Largest of 3 Numbers --------------------
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest number is: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "Largest number is: " << b << endl;
    }
    else {
        cout << "Largest number is: " << c << endl;
    }

    return 0;
}
