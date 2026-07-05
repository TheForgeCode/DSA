#include <bits/stdc++.h>
using namespace std;

// Pattern: Basic Recursion
// Concept: Divide the problem into two smaller subproblems


// Approach:
// Fibonacci sequence:
// F(0) = 0
// F(1) = 1
//
// Every Fibonacci number is the sum of the previous two numbers.
// Recursively calculate fib(n-1) and fib(n-2),
// then return their sum.
//
// Base Case:
// If n is 0 or 1, return n.

// Time Complexity: O(2^n)
// Space Complexity: O(n) [Recursive Call Stack]

class Solution {
public:
    int fib(int n) {
        if(n < 2) return n;

        return fib(n - 1) + fib(n - 2);
    }
};


// [Note]:
// The same subproblems are solved multiple times.
//
// Example:
// fib(5)
//
//                5
//             /     \
//            4       3
//          /   \   /   \
//         3     2 2     1
//        / \   / \
//       2   1 1   0
//
// fib(3), fib(2), fib(1) are calculated repeatedly.


// [Extension]:
// This recursive solution is not optimal due to overlapping subproblems.
//
// Better approaches:
// 1. Memoization (Top Down DP)      -> O(n)
// 2. Tabulation (Bottom Up DP)      -> O(n)
// 3. Space Optimized DP             -> O(n) Time, O(1) Space