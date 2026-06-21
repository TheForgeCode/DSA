#include <bits/stdc++.h>
using namespace std;


// Pattern: Basic Maths
// Concept: Greatest Common Divisor (GCD)
//
// GCD = Largest number that divides both numbers exactly.
//
// Example:
// GCD(20, 5) = 5
//
// Factors of 20 = 1, 2, 4, 5, 10, 20
// Factors of 5  = 1, 5
//
// Greatest common factor = 5


// ======================================================
// Approach 1: Check all numbers from 1 to min(a,b)
// ======================================================
//
// Store the largest common divisor found so far.
// Traverse from 1 to min(a,b).
// If current number divides both numbers,
// update answer.
//
// Time Complexity: O(min(a,b))
// Space Complexity: O(1)

int gcd(int a, int b)
{
    int val = 1;

    for(int i = 1; i <= min(a, b); i++) {

        if(a % i == 0 && b % i == 0) {
            val = i;
        }
    }

    return val;
}


// ======================================================
// Approach 2: Traverse backwards
// ======================================================
//
// Start from min(a,b).
// First common divisor encountered will be the GCD.
// Return immediately.
//
// Time Complexity: O(min(a,b))
// Space Complexity: O(1)

int gcd(int a, int b)
{
    for(int i = min(a, b); i >= 1; i--) {

        if(a % i == 0 && b % i == 0) {
            return i;
        }
    }
}


// ======================================================
// Approach 3: Euclidean Algorithm (Optimal)
// ======================================================
//
// Key Observation:
// gcd(a, b) = gcd(a % b, b)
//
// We repeatedly replace the larger number
// with its remainder until one number becomes 0.
//
// The other number becomes the GCD.
//
// Time Complexity: O(log(min(a,b)))
// Space Complexity: O(1)

int gcd(int a, int b)
{
    while(a > 0 && b > 0) {

        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }

    if(a == 0) return b;

    return a;
}