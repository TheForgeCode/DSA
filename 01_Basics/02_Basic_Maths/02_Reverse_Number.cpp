#include <bits/stdc++.h>
using namespace std;


// Pattern: Basic Maths
// Concept: Reverse a number digit by digit


// Approach:
// Extract the last digit using % 10.
// Append it to the reversed number.
// Remove the last digit using / 10.
// Continue until the number becomes 0.

// Time Complexity: O(log10(n))
// Space Complexity: O(1)


long long int reverseNumber(long long int n)
{
    long long int revNum = 0;
    int lastdigit = 0;

    while(n > 0) {
        lastdigit = n % 10;

        revNum = (revNum * 10) + lastdigit;

        n /= 10;
    }

    return revNum;
}


// [Note]:
// To reverse a number:
//
// revNum = revNum * 10 + digit
//
// Multiplying by 10 shifts existing digits left and creates space for the new digit.

// [Important]:
// Trailing zeros automatically disappear.

// [Revision Note]:
// Number reversal template:
//
// while(n > 0) {
//     int digit = n % 10;
//     revNum = revNum * 10 + digit;
//     n /= 10;
// }