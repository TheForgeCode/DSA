#include <bits/stdc++.h>
using namespace std;

// Pattern: Recursion
// Concept: Compare characters from both ends recursively


// Approach:
// Compare first and last character.
// If unequal, return false.
// Otherwise solve the smaller subproblem.
// Base case:
// Pointer reaches the middle of the string.

// Time Complexity: O(n)
// Space Complexity: O(n) [Recursive Call Stack]


bool helper(string &str, int i, int n) {
    if(i >= n / 2) return true;

    if(str[i] != str[n - i - 1]) return false;

    return helper(str, i + 1, n);
}

bool isPalindrome(string &str) {
    int n = str.size();

    return helper(str, 0, n);
}


// [Note]:
// Iterative version of the same recursion.

bool palindrome(string &str) {
    int l = 0;
    int r = str.size() - 1;

    while(l < r) {
        if(str[l] != str[r]) return false;

        l++;
        r--;
    }

    return true;
}


// [Extension]:
// LeetCode - Valid Palindrome
//
// Same Two Pointer approach with preprocessing.
//
// Additional Steps:
// 1. Ignore non-alphanumeric characters.
// 2. Convert uppercase letters to lowercase before comparison.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l < r) {

            while(l < s.size() - 1 && l < r && !isalnum(s[l])) l++;
            while(r > 0 && l < r && !isalnum(s[r])) r--;

            int a = tolower(s[l]);
            int b = tolower(s[r]);

            if(a != b) return false;

            l++;
            r--;
        }

        return true;
    }
};