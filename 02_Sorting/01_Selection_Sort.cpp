#include <bits/stdc++.h>
using namespace std;

// ==========================================================
// Selection Sort
// ==========================================================
//
// Idea:
// 
// Divide the array into two parts:
// 1. Sorted
// 2. Unsorted
//
// In every iteration:
// - Find the smallest element from the unsorted part.
//
// - Swap it with the first element of the unsorted part.
//
// After every iteration, the sorted part grows by one.


// ==========================================================
// Algorithm
// ==========================================================
//
// for every index i
//
//      find minimum element
//      from i to n-1
//
//      swap with arr[i]
//
// Repeat until array is sorted.

void swap(int &first, int &second) {

    int temp = first;
    first = second;
    second = temp;
}

void selectionSort(vector<int> &arr) {

    for(int i = 0; i < arr.size(); i++) {

        int minIndex = i;

        for(int j = i + 1; j < arr.size(); j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if(i != minIndex) {
            swap(arr[i], arr[minIndex]);
        }
    }
}


// ==========================================================
// Time Complexity
// ==========================================================
//
// Best Case   : O(n²)
// Average Case: O(n²)
// Worst Case  : O(n²)
//
// Why?
// Number of comparisons:
//
// (n-1) + (n-2) + ... + 1 = n(n-1)/2 = O(n²)
//
// Swaps: At most (n-1) = O(n)


// ==========================================================
// Space Complexity
// ==========================================================
//
// O(1) [In-place sorting algorithm]


// ==========================================================
// Key Observation
// ==========================================================
// 
// Stable? No.
// Equal elements may change their relative order after swapping.
// 
// Adaptive? No.
// Even if the array is already sorted, it still performs O(n²) comparisons.
//
// Comparisons:
// Always O(n²)
//
// Swaps:
// At most O(n)
//
// Selection Sort performs fewer swaps than Bubble Sort.