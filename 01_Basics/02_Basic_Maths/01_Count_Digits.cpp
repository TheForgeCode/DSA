#include <bits/stdc++.h>
using namespace std;


// Pattern: Basic Maths
// Concept: Extract digits using modulo (%) and division (/)


// Approach:
// Traverse every digit of the number using % 10.
// Check whether the extracted digit evenly divides n.
// Ignore digit 0 because division by zero is undefined.
// Count all digits that divide n and return the count.

// Time Complexity: O(log10(n))
// Space Complexity: O(1)


int countDigits(int n) {
    // n remains unchanged for divisibility checks
    int value = n;

    int lastdigit = 0;
    int count1 = 0;

    while(value > 0) {
        lastdigit = value % 10;

        if(lastdigit != 0 && n % lastdigit == 0) {
            count1++;
        }

        value /= 10;
    }

    return count1;
}


// [Note]:
// To extract last digit:
// num % 10
//
// To remove last digit:
// num /= 10
//
// Number of iterations = number of digits in n
// Therefore complexity is O(log10(n))


// [Important]:
// Repeated digits are counted multiple times.
//
// Example:
// n = 336
//
// Digit 3 appears twice.
// Since both occurrences divide 336,
// answer = 3 (not 2).


// [Edge Case]:
// n = 1012
//
// Digit 0 should be ignored.
// Division by zero is not allowed.
//
// if(lastdigit != 0)
// prevents runtime errors.