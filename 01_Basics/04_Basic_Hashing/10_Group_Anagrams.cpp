#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Common Identifier (Anagram Signature)


// ==========================================================
// Approach 1: Brute Force
// ==========================================================
//
// Compute frequency of the current string.
// Compare it with every remaining string.
//
// If frequencies match, both strings belong to the same group.
// Skip strings that have already been grouped.
//
// Time Complexity: O(n² × k)
// Space Complexity: O(n × k)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> groups;

        for (int currentIndex = 0; currentIndex < strs.size(); currentIndex++) {

            bool alreadyGrouped = false;
            for (auto &group : groups) {

                if (find(group.begin(), group.end(), strs[currentIndex]) != group.end()) {
                    alreadyGrouped = true;
                    break;
                }
            }

            if (alreadyGrouped) continue;

            vector<int> currentFrequency(26, 0);

            for (char ch : strs[currentIndex]) {
                currentFrequency[ch - 'a']++;
            }

            vector<string> currentGroup;
            currentGroup.push_back(strs[currentIndex]);

            for (int nextIndex = currentIndex + 1; nextIndex < strs.size(); nextIndex++) {

                vector<int> nextFrequency(26, 0);

                for (char ch : strs[nextIndex]) {
                    nextFrequency[ch - 'a']++;
                }

                if (currentFrequency == nextFrequency) {
                    currentGroup.push_back(strs[nextIndex]);
                }
            }

            groups.push_back(currentGroup);
        }

        return groups;
    }
};



// ==========================================================
// Approach 2: Hashing + Frequency Signature
// ==========================================================
//
// Compute character frequency.
//
// Convert the frequency array into a unique string.
//
// Use that string as the key in an unordered_map.
//
// Every anagram produces the same frequency signature.
//
// Example:
//
// eat -> #1#0#0#0#1...#1
// tea -> #1#0#0#0#1...#1
//
// Time Complexity: O(n × k)
// Space Complexity: O(n × k)

class Solution {
public:
    string createSignature(const vector<int> &frequency) {

        string signature;

        for (int count : frequency) {
            signature += "#";
            signature += to_string(count);
        }

        return signature;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        unordered_map<string, int> groupMap;

        for (string &word : strs) {

            vector<int> frequency(26, 0);

            for (char ch : word) {
                frequency[ch - 'a']++;
            }

            string signature = createSignature(frequency);

            auto groupIterator = groupMap.find(signature);

            if (groupIterator != groupMap.end()) {

                groups[groupIterator->second].push_back(word);

            } else {

                groupMap[signature] = groups.size();
                groups.push_back({word});
            }
        }

        return groups;
    }
};



// ==========================================================
// Approach 3: Hashing + Sorted String (Simpler)
// ==========================================================
//
// Copy the current string.
//
// Sort the copied string.
//
// Every anagram becomes
// the same sorted string.
//
// Example:
//
// eat -> aet
// tea -> aet
// ate -> aet
//
// Use the sorted string
// as the key.
//
// Time Complexity: O(n × k log k)
// Space Complexity: O(n × k)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        unordered_map<string, int> groupMap;

        for (string &word : strs) {

            string sortedWord = word;

            sort(sortedWord.begin(), sortedWord.end());

            auto groupIterator = groupMap.find(sortedWord);

            if (groupIterator != groupMap.end()) {

                groups[groupIterator->second].push_back(word);

            } else {

                groupMap[sortedWord] = groups.size();
                groups.push_back({word});
            }
        }

        return groups;
    }
};


// ==========================================================
// Notes
// ==========================================================
//
// Key Observation:
//
// Every anagram has the same identifier.
//
// Identifier can be:
//
// 1. Character Frequency Signature
// 2. Sorted String
//
//
// unordered_map:
//
// Key   -> Anagram Identifier
// Value -> Index of the corresponding group
//
//
// Functions Used:
//
// sort(begin, end)
//
// Sorts a string in ascending order.
//
// find(key)
//
// Returns an iterator.
//
// groupIterator != groupMap.end()
// -> Key exists.
//
// groupIterator->second
// -> Returns the mapped value.
//
//
// Important Learning:
//
// A map key is an identifier.
// Instead of comparing every pair of strings, compute a common identifier and use it as the key.
//
// This removes the need for nested comparisons.