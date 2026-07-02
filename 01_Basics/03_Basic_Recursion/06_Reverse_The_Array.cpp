#include <bits/stdc++.h>
using namespace std;

// Pattern: Recursion
// Concept: Two Pointers + Recursion

// Approach:
// Reverse only the subarray after index m.
// Start two pointers:
// Left  = m + 1
// Right = last index
//
// Swap both elements.
// Move left forward and right backward.
// Continue until both pointers meet or cross.

// Time Complexity: O(n - m)
// Space Complexity: O(n - m) [Recursive Call Stack]

void revhelp(vector<int> &arr, int l, int r) {
    if(l >= r) return;

    swap(arr[l], arr[r]);

    revhelp(arr, l + 1, r - 1);
}


void reverseArrayRecursive(vector<int> &arr, int m) {
    int Size = arr.size() - 1;

    revhelp(arr, m + 1, Size);
}


// [Note]:
// Recursive solution of the iterative two-pointer reversal.


void reverseArrayIterative(vector<int> &arr, int m) {
    int l = m + 1;
    int r = arr.size() - 1;

    while (l < r) {
        swap(arr[l], arr[r]);
        l++; r--;
    }
}