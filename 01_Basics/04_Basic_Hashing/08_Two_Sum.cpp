#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Complement Search


// ==========================================================
// Approach 1: Brute Force
// ==========================================================
//
// Select one element.
// Traverse the remaining array.
// If the complement is found, return both indices.

// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {

                if(target - nums[i] == nums[j])
                    return {i, j};
            }
        }

        return {};
    }
};


// ==========================================================
// Approach 2: Two-Pass Hashing
// ==========================================================
//
// Store every element and its index in an unordered_map.
//
// Traverse the array again.
// Search for the complement.
//
// Make sure not to use the same element twice.

// Time Complexity: O(n) [Average]
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            auto it = mpp.find(complement);

            if(it != mpp.end() && it->second != i)
                return {i, it->second};
        }

        return {};
    }
};


// ==========================================================
// Approach 3: One-Pass Hashing (Optimal)
// ==========================================================
//
// Traverse the array once.
//
// For every element, search whether its complement has already been seen.
//
// If found, return both indices.
//
// Otherwise, store the current element and continue.

// Time Complexity: O(n) [Average]
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            auto it = mpp.find(complement);

            if(it != mpp.end()) {
                return {i, it->second};
            }
            mpp[nums[i]] = i;
        }

        return {};
    }
};


// [Key Observation]:
// complement = target - currentElement
//
// Instead of searching the entire array, search whether the complement already exists in the hash map.


// [Important]:
// In the one-pass approach, check for the complement before inserting the current element.
// This avoids using the same element twice.