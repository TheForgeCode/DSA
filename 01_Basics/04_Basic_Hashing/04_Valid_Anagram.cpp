#include <bits/stdc++.h>
using namespace std;

// Pattern: Character Hashing
// Concept: Frequency Counting


// ==========================================================
// Approach 1: Character Hashing (Optimal)
// ==========================================================
//
// If both strings have different lengths,
// they cannot be anagrams.
//
// Store the frequency of characters of the first string.
// Traverse the second string and decrease the frequency.
//
// If any frequency becomes negative,
// the second string contains that character
// more times than the first string.
//
// Since both strings have equal length,
// if no frequency becomes negative,
// all frequencies become 0 automatically.

// Time Complexity: O(n)
// Space Complexity: O(1) [Frequency array of size 26]

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int> freq(26, 0);

        for(auto ch : s) {
            freq[ch - 'a']++;
        }

        for(auto ch : t) {
            freq[ch - 'a']--;

            if(freq[ch - 'a'] < 0) return false;
        }

        return true;
    }
};


// ==========================================================
// Approach 2: Using map
// ==========================================================
//
// Store the frequency of both strings
// using two maps.
//
// If both maps are equal,
// the strings are anagrams.

// Time Complexity: O(n log 26)
// Space Complexity: O(26)

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        map<char, int> smp;
        map<char, int> tmp;

        for(auto ch : s) {
            smp[ch]++;
        }

        for(auto ch : t) {
            tmp[ch]++;
        }

        return smp == tmp;
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


// [Important]:
// Since there are only 26 lowercase letters,
// traversing the frequency array takes O(26),
// which is considered O(1).


// [Why Character Hashing is Better?]
//
// map:
// - Implemented using Red-Black Tree.
// - Insert/Search = O(log n)
//
// Character Hashing:
// - Direct array indexing.
// - Insert/Search = O(1)


// [Extension]:
// If the string contains all ASCII characters:
//
// vector<int> freq(256, 0);
//
// If characters are not bounded,
// use unordered_map<char, int>.