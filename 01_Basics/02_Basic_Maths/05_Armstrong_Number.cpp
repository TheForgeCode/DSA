#include <bits/stdc++.h>
using namespace std;

// Pattern: Basic Maths
// Concept: Digit Extraction + Power of Digits

// Armstrong Number:
// A number is Armstrong if: Sum of (each digit ^ total number of digits) == Original Number
//
// Example:
//
// 153
// Number of digits = 3
//
// 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
//
// Therefore 153 is an Armstrong Number.


// Approach:
// 1. Count total digits in the number.
// 2. Extract every digit.
// 3. Raise each digit to the power of total digits.
// 4. Add them to a sum.
// 5. Compare sum with original number.
//
// Time Complexity: O(log10(n))
// Space Complexity: O(1)


bool isArmstrong(int num) {
    int digit = log10(num) + 1;
    int sum = 0;
    int n = num;

    while(n > 0) {
        sum += pow(n % 10, digit);
        n /= 10;
    }

    if(sum == num) return true;
    return false;
}