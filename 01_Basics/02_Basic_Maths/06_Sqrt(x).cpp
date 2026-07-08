#include <bits/stdc++.h>
using namespace std;

// ==========================================================
// Problem
// ==========================================================
//
// Given a non-negative integer x, return ⌊√x⌋.
// Do NOT use: pow() or sqrt()
//
// ==========================================================
// Approach 1: Linear Search
// ==========================================================
//
// Start from 0.
// Keep checking: i * i <= x
//
// Store the latest valid value.
//
// Time Complexity: O(√x)
// Space Complexity: O(1)

class Solution {
public:
    int mySqrt(int x) {
        int answer = 0;

        for(long long i = 0; i * i <= x; i++) {
            answer = i;
        }
        return answer;
    }
};


// ==========================================================
// Approach 2: Binary Search (Optimal)
// ==========================================================
//
// Search space:
//
// [1 ... x]
//
// If:
//
// mid² < x
//
// Answer lies on the right.
//
//
//
// If:
//
// mid² > x
//
// Answer lies on the left.
//
//
//
// If:
//
// mid² == x
//
// Exact square root found.
//
//
//
// If no exact square root exists,
// return the largest valid value.
//
//
// Time Complexity:
// O(log x)
//
// Space Complexity:
// O(1)

class Solution {
public:
    int mySqrt(int x) {

        if(x < 2)
            return x;

        int low = 1;
        int high = x;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long square = 1LL * mid * mid;

            if(square < x) {

                low = mid + 1;

            }
            else if(square == x) {

                return mid;

            }
            else {

                high = mid - 1;
            }
        }

        return high;
    }
};


// ==========================================================
// Why return high?
// ==========================================================
//
// Binary Search stops when:
//
// low > high
//
// At that moment:
//
// high = largest value
// whose square <= x
//
// low = first value
// whose square > x
//
// Therefore:
// answer = high