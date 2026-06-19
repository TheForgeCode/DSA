#include <bits/stdc++.h>
using namespace std;


// Approach 1: Iterative solution (Brute Force)
// iterate from 1 to n and keep adding numbers to sum
// Time Complexity: O(n)
// Space Complexity: O(1)

long long sumFirstN_Iterative(long long n) {
    long long sum = 0;

    for(long long i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}


// Approach 2: Recursive solution
// reduce problem size by adding current number and solving for n - 1
// Time Complexity: O(n)
// Space Complexity: O(n) [recursive call stack]

long long sumFirstN_Recursive(long long n) {
    if(n == 0) {
        return 0;
    }

    return n + sumFirstN_Recursive(n - 1);
}


// Approach 3: Mathematical formula (Optimal)
// use formula for sum of first n natural numbers n(n + 1) / 2
// Time Complexity: O(1)
// Space Complexity: O(1)

long long sumFirstN_Optimal(long long n) {
    return (n * (n + 1)) / 2;
}


// Notes:

// If expected time complexity is O(1),
// look for a mathematical formula instead of iteration or recursion.

// Use long long because the answer can exceed the range of int for large values of n.