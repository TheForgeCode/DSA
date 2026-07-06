#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Store Visited Elements


// ==========================================================
// Approach 1: Brute Force
// ==========================================================
//
// Select one element.
// Compare it with every remaining element.
//
// If any duplicate is found, return true.
// Otherwise, return false.

// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] == nums[j])
                    return true;
            }
        }

        return false;
    }
};


// ==========================================================
// Approach 2: Hashing (Optimal)
// ==========================================================
//
// Traverse the array once.
//
// Insert every element into an unordered_set.
//
// If insertion fails, the element already exists.
// Hence, a duplicate is found.

// Time Complexity: O(n) [Average]
// Space Complexity: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(auto num : nums) {
            auto result = st.insert(num);

            if(!result.second)
                return true;
        }
        return false;
    }
};


// [Note]:
// unordered_set: Stores only unique elements.
//
// Average: Insert/Search = O(1)


// [Functions Used]:
//
// st.insert(value)
//
// Returns: pair<iterator, bool>
//
// result.second
// = true  -> insertion successful
// = false -> element already exists