#include <bits/stdc++.h>
using namespace std;


// Pattern: Basic Maths
// Concept: Reverse a number and compare it with the original number


// Approach:
// Reverse the number digit by digit.
// If the reversed number is equal to the original number,
// then the number is a palindrome.

// Time Complexity: O(log10(n))
// Space Complexity: O(1)


bool palindrome(int n)
{
    int reverse_num = 0;
    int last_digit = 0;

    int num = n;

    while(num > 0) {
        last_digit = num % 10;

        reverse_num = (reverse_num * 10) + last_digit;

        num /= 10;
    }

    if(n == reverse_num) {
        return true;
    }

    return false;
}


// [Note]:
// Multiplying by 10 shifts existing digits left
// and creates space for the new digit.


// Example:
//
// n = 1234
//
// reverse_num = 0
//
// digit = 4 -> 4
// digit = 3 -> 43
// digit = 2 -> 432
// digit = 1 -> 4321
//
// Reversed number = 4321

// [Revision Note]:
// Most number reversal problems follow this template:
//
// while(num > 0) {
//     int digit = num % 10;
//     reverse_num = reverse_num * 10 + digit;
//     num /= 10;
// }


// [Edge Case]:
// Single digit numbers are always palindrome.