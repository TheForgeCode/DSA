#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Character Lookup


// ==========================================================
// Approach 1: Brute Force
// ==========================================================
//
// Traverse every jewel.
// For each jewel, traverse all stones.
// Count every matching stone.

// Time Complexity: O(n × m)
// Space Complexity: O(1)

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for(auto jewel : jewels) {
            for(auto stone : stones) {

                if(jewel == stone)
                    count++;
            }
        }

        return count;
    }
};


// [Note]:
// Characters are case-sensitive.
//
// 'a' != 'A'


// [Observation]:
// Every jewel is compared with every stone.
//
// If:
// n = jewels.length()
// m = stones.length()
//
// Comparisons = n × m


// [Extension]:
// Store all jewels in a hash-based container.
//
// Then traverse stones once.
//
// Time Complexity: O(n + m)
// Space Complexity: O(n)