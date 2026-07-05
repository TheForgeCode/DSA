#include <bits/stdc++.h>
using namespace std;

// Pattern: Character Hashing
// Concept: Frequency Counting


// Approach:
// Count the frequency of every character.
//
// Traverse the string again.
// The first character whose frequency is 1
// is the first non-repeating character.
//
// If no such character exists,
// return -1.

// Time Complexity: O(n)
// Space Complexity: O(1) [Frequency array of size 26]

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for(auto ch : s) {
            freq[ch - 'a']++;
        }

        for(int i = 0; i < s.size(); i++) {

            if(freq[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};


// [Note]:
// Character Hashing:
//
// Index = ch - 'a'
//
// 'a' -> 0
// 'b' -> 1
// ...
// 'z' -> 25


// [Observation]:
// First traversal:
// Count frequencies.
//
// Second traversal:
// Preserve the original order and
// find the first character whose
// frequency is exactly 1.


// [Extension]:
// If the string contains all ASCII characters:
//
// vector<int> freq(256, 0);
//
// If characters are not bounded,
// use unordered_map<char, int>.