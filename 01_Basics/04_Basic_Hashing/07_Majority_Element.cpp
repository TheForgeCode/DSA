#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Frequency Counting


// Approach:
// Count the frequency of every element
// using an unordered_map.
//
// Traverse the map.
// The element whose frequency is
// greater than n/2 is the majority element.
//
// The problem guarantees that
// the majority element always exists.

// Time Complexity: O(n) [Average Case]
// Space Complexity: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int, int> mpp;

        // Count frequencies
        for(auto it : nums) {
            mpp[it]++;
        }

        // Find majority element
        for(auto it : mpp) {

            if(it.second > n / 2)
                return it.first;
        }

        return -1;
    }
};


// [Note]:
// Majority Element:
//
// Frequency > floor(n / 2)


// [Example]:
//
// nums = {2,2,1,1,1,2,2}
//
// n = 7
//
// Majority Frequency > 3
//
// 2 -> 4
// 1 -> 3
//
// Answer = 2


// [Observation]:
// The problem guarantees that a majority element always exists.
//
// Therefore, the final return statement is only present to satisfy the compiler.


// [Extension]:
// There exists an optimal solution with:
//
// Time Complexity: O(n)
// Space Complexity: O(1)
//
// (Learn later in Striver A2Z Arrays section.)