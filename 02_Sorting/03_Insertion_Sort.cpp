#include <bits/stdc++.h>
using namespace std;

// ==========================================================
// Insertion Sort
// ==========================================================
//
// Idea:
// Treat the left part of the array as sorted.
//
// Pick the next element from the unsorted part.
// Move it left until it reaches its correct position.
//
// Repeat until the entire array is sorted.


// ==========================================================
// Algorithm
// ==========================================================
//
// Traverse the array from left to right.
//
// For each element:
// Compare it with previous elements.
//
// While the previous element is larger:
// Swap them.
//
// The current element is inserted into its correct position
// within the sorted part.


void insertion_sort(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int current = i;

        while (current > 0 && nums[current - 1] > nums[current]) {
            swap(nums[current - 1], nums[current]);
            current--;
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
// Equal elements keep their relative order.


// ==========================================================
// Adaptive?
// ==========================================================
//
// Yes.
// If the array is already sorted,
// only one comparison is performed per element.


// ==========================================================
// Key Observation
// ==========================================================
//
// After every iteration:
//
// The subarray: nums[0 ... i] is sorted.
//
// Only the current element moves left.
// Previously sorted elements remain sorted.