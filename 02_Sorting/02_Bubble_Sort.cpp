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
// Repeat passes.
//
// In every pass: Compare adjacent elements.
//
// If: arr[current] > arr[current + 1]
// Swap them.
//
// If no swaps occur during a pass, the array is already sorted. Stop early.


void bubbleSort(vector<int> &nums) {
    for (int pass = 0; pass < nums.size(); pass++) {
        bool swapped = false;

        for (int current = 0; current < nums.size() - pass - 1; current++) {
            if (nums[current] > nums[current + 1]) {
                swap(nums[current], nums[current + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}


// ==========================================================
// Time Complexity
// ==========================================================
//
// Best Case: O(n)
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
// Yes.
//
// If the array becomes sorted before all passes finish,
// the algorithm stops early using the swapped flag.


// ==========================================================
// Optimization
// ==========================================================
//
// Use a boolean variable:
//
// bool swapped = false;
//
// Set it to true whenever a swap occurs.
//
// If swapped remains false after an entire pass, the array is already sorted.
// Break out of the loop immediately.
//
// Best Case becomes: O(n).


// ==========================================================
// Key Observation
// ==========================================================
//
// After every pass: Largest element reaches its correct position.
//
// Therefore:
// Inner loop runs till: n - pass - 1
//
// If a complete pass performs no swaps, the remaining array is already sorted.