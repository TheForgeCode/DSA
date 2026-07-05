#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Frequency Counting + Set


// Approach:
// Count the frequency of every element using an unordered_map.
// Store each frequency in an unordered_set.
//
// If inserting a frequency into the set fails,
// that frequency has already appeared.
// Hence, occurrences are not unique.

// Time Complexity: O(n) [Average Case]
// Space Complexity: O(n)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;

        for(auto it : arr) {
            mpp[it]++;
        }

        unordered_set<int> st;

        for(auto it : mpp) {
            auto result = st.insert(it.second);
            if(!result.second) return false;
        }

        return true;
    }
};


// [Note]:
// unordered_map:
// key   -> array element
// value -> frequency
//
// Average:
// Insert/Search = O(1)


// [Note]:
// unordered_set stores only unique elements.
//
// insert() returns:
//
// pair<iterator, bool>
//
// result.second
// = true  -> insertion successful
// = false -> element already exists


// [Alternative]:
// Since the constraints are:
//
// -1000 <= arr[i] <= 1000
//
// We can replace unordered_map with a
// frequency array of size 2001.
//
// Index Mapping:
// index = value + 1000
//
// Time Complexity: O(n)
// Space Complexity: O(1) [Fixed-size array]