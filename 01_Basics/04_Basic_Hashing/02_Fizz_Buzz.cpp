#include <bits/stdc++.h>
using namespace std;

// Pattern: Simulation
// Concept: Conditional Statements


// Approach:
// Traverse numbers from 1 to n.
//
// If divisible by both 3 and 5,
// store "FizzBuzz".
//
// Else if divisible by 3,
// store "Fizz".
//
// Else if divisible by 5,
// store "Buzz".
//
// Otherwise,
// store the number as a string.

// Time Complexity: O(n)
// Space Complexity: O(n) [Output Array]

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> arr;

        for(int i = 1; i <= n; i++) {

            if(i % 3 == 0 && i % 5 == 0) {
                arr.push_back("FizzBuzz");
            }
            else if(i % 3 == 0) {
                arr.push_back("Fizz");
            }
            else if(i % 5 == 0) {
                arr.push_back("Buzz");
            }
            else {
                arr.push_back(to_string(i));
            }
        }

        return arr;
    }
};


// [Note]:
// Check divisibility by both 3 and 5 first.
//
// Otherwise,
// numbers like 15 would satisfy
// i % 3 == 0 first
// and "FizzBuzz" would never be reached.


// [Functions Used]:
//
// to_string(number)
//
// Converts an integer into a string.


// [Observation]:
// Every number is processed exactly once.
//
// Number of iterations = n