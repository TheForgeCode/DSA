#include <bits/stdc++.h>
using namespace std;

// ==========================================================
// Bubble Sort
// ==========================================================
//
// Idea:
// Compare adjacent elements.
// If they are in the wrong order, swap them.
// After every pass, the largest element moves to its correct position at the end.
// The unsorted part shrinks from the end after each pass.


// ==========================================================
// Algorithm
// ==========================================================
//
// Repeat n-1 passes.
//
// In every pass: Compare adjacent elements.
//
// If: arr[j] > arr[j+1]
// Swap them.
// 
// Largest element reaches its correct position.


void bubbleSort(vector<int> &nums) {
    for(int pass = 0; pass < nums.size(); pass++) {
        for(int current = 0; current < nums.size() - pass - 1; current++) {
            if(nums[current] > nums[current + 1]) {
                swap(nums[current], nums[current + 1]);
            }
        }
    }
}


// ==========================================================
// Time Complexity
// ==========================================================
//
// Best Case: O(n²)
// Average Case: O(n²)
// Worst Case: O(n²)


// ==========================================================
// Space Complexity
// ==========================================================
//
// O(1) [In-place sorting algorithm]


// ==========================================================
// Stable?
// ==========================================================
//
// Yes.
//
// Equal elements keep their relative order.


// ==========================================================
// Adaptive?
// ==========================================================
//
// No (Current Code)
//
// It always performs all passes.
// Can be made Adaptive using a swapped flag.


// ==========================================================
// Optimization
// ==========================================================
//
// Use a boolean:
// swapped = false
//
// If no swap occurs in an entire pass, array is already sorted.
// Break immediately.
//
// Best Case becomes: O(n)


// ==========================================================
// Key Observation
// ==========================================================
//
// After every pass:
// Largest element reaches its correct position.
//
// Therefore:
// Inner loop runs till: n - pass - 1